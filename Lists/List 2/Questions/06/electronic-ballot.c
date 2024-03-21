#include <stdio.h>

int main() 
{
    int candidate_votes[3] = {0};
    int null_votes = 0; 
    int total = 0; 
    int vote;

    printf("Welcome to the electronic ballot box for the presidential election.\n");
    printf("Candidates: 5-Paulo, 7-Renata\n");
    printf("To vote, enter the candidate's number. Enter 0 for a blank vote. Enter a negative number to finalize the ballot.\n");

    // Voting process
    do {
        printf("Enter your vote: ");
        scanf("%d", &vote);

        if (vote == 5 || vote == 7 || vote == 0) {
            if (vote == 5) {
                candidate_votes[0]++;
            } else if (vote == 7) {
                candidate_votes[1]++;
            } else {
                candidate_votes[2]++;
            }
            total++;
        } else if (vote >= 0) {
            printf("Invalid candidate number. Please vote again.\n");
            null_votes++;
        }
    } while (vote >= 0);

    printf("\nVoting Report:\n");
    printf("Paulo received %d votes (%.2f%%)\n", candidate_votes[0], (float)candidate_votes[0] / total * 100);
    printf("Renata received %d votes (%.2f%%)\n", candidate_votes[1], (float)candidate_votes[1] / total * 100);
    printf("Blank votes: %d (%.2f%%)\n", candidate_votes[2], (float)candidate_votes[2] / total * 100);
    printf("Null votes: %d\n", null_votes);

    if (candidate_votes[0] > candidate_votes[1]) {
        printf("\nPaulo is elected as the president!\n");
    } 
    else if (candidate_votes[1] > candidate_votes[0]) {
        printf("\nRenata is elected as the president!\n");
    } 
    else {
        printf("\nIt's a tie!\n");
    }

    return 0;
}
