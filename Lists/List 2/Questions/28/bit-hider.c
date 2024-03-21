#include <stdio.h>
#include <stdlib.h>

unsigned char hide_bits(unsigned char X, unsigned char Y) 
{
  // check if Y is less than 5 (invalid input)
  if (Y < 5) {
    printf("Error: Y must be greater than or equal to 5.\n");
    exit(1); // terminate program with exit code 1 (error)
  }

  unsigned char mask = 0b11110000;  // mask to isolate 4 most significant bits

  // hide bits in elements before Y
  for (int i = Y - 1; i >= Y - 4; i--) {
    unsigned char current = X & (1 << (i % 8));  // get relevant bit from X
    unsigned char shifted = current << (i - (Y - 4));  // shift bit to correct position
    *(unsigned char*)(&Y - i - 1) ^= shifted;  // hide bit using XOR
  }

  // hide bits in elements after Y
  for (int i = Y + 1; i <= Y + 4; i++) {
    unsigned char current = X & (1 << (i % 8));
    unsigned char shifted = current << (i - (Y + 4));
    *(unsigned char*)(&Y + i) ^= shifted;  // hide bit using XOR
  }

  // apply mask to keep only the modified least significant bits
  return Y & mask;
}

int main() 
{
  unsigned char X, Y;

  printf("Enter the value of X: ");
  scanf("%hhu", &X);

  printf("Enter the value of Y (must be greater than or equal to 5): ");
  scanf("%hhu", &Y);

  unsigned char result = hide_bits(X, Y);
  printf("Original Y: %d\n", Y);
  printf("Result: %d\n", result);

  return 0;
}
