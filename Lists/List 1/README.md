**IFCE - Maracanaú Campus**  
**Prof. Daniel Ferreira**  
**Programming Laboratory**  

**LIST I**  
*C Expressions*  
26/02/2024  

**Questions:**  
1. Determine the order of calculation of the operators in each of the following C statements and show the value of x after each statement is executed.
   - x = 7 + 3*6/2-l
   - x = 2%2 + 2*2-2/2;
   - x = (3 * 9 * (3 + (9*3/ (3) ) ) );

2. Write a program that reads a decimal integer value X and writes this same value on the screen in hexadecimal and octal bases.
   - Ex.: Enter the value: 10
     - Hexadecimal: A
     - Octal: 12

3. Write a program capable of reading a real value and writing it with only one decimal place.

4. Knowing that the arguments of the "printf" function can be expressions (a+b, a/b, a*b...), and not just arguments, write a program capable of reading an integer value X and writing its triple, its square, and its half.

5. Write a program that takes the value of a restaurant bill and prints the total amount to be paid, considering that the restaurant charges a 10% tip for the waiter.

6. Create a program to read a person's height (in meters) and gender and calculate their ideal weight using the following formula:
   - for men: 72.7 * height - 58
   - for women: 62.1 * height - 44.7

7. Make a program that reads a quantity of hours, minutes, and seconds and prints the total number of seconds.

8. Write a program that receives an integer value and presents the result of the squared value read.

9. Write a program that reads an integer numeric value and presents as a result its successor and predecessor values.

10. Write a program that calculates and presents the volume value of a rectangular box using the formula VOLUME = LENGTH * WIDTH * HEIGHT.

11. Develop a program that presents the value of the dollar conversion from a value read in reais. The program should request the dollar exchange rate and also the amount of reais that the user wants to convert.

12. Write a program that asks the user to enter two numbers, obtain them from the user, and print the sum, product, difference, quotient, and remainder of the division of the two numbers.

13. Write a program that reads two variables A and B and exchanges their values. The goal is for variable A to contain the value of B and variable B to contain the value of A. Present the values after the exchange processing is completed.

14. Write a program that reads a temperature in Celsius and presents it converted to Fahrenheit. The conversion formula is F = (9 * C + 160) / 5, where F is the Fahrenheit temperature and C is the temperature in Celsius.

15. A company hires a salesman at R$ 50.25 per day. Create a program that requests the number of days worked by the salesman and prints the net amount to be paid to him, knowing that if he worked up to 10 days he is not entitled to gratuity, if he worked more than 10 days and up to 20 days he is entitled to a 20% gratuity, and if he worked more than 20 days he is entitled to a 30% gratuity. 10% income tax is always deducted from the gross amount.

16. Develop a program that calculates the net salary of a teacher. To develop the program, it is necessary to have some data, such as the value of the hourly rate, the number of hours worked in the month, and the percentage of INSS discount. First, establish your gross salary to make the discount and have the value of the net salary. Note: the program should inform the gross and net salary of the teacher.

17. Write a program that receives an integer value from the user and presents its absolute value (module). Do not use the if decision structure.

18. Write a program that reads the radius of a circle and prints its diameter, the value of its circumference, and its area. Use the value of 3.14159 for "pi". Do each of these calculations within the printf statement(s) and use the conversion specifier %f.

19. Write a program that prints a rectangle, an ellipse, an arrow, and a rhombus as follows:

```
	*********         ***           *               *       
	*       *       *     *        ***            *   *      
	*       *     *         *     *****         *       *   
	*       *     *         *       *         *           *  
	*       *     *         *       *       *               *
	*       *     *         *       *         *           *  
	*       *     *         *       *           *       *   
	*       *       *     *         *             *   *      
	*********         ***           *               *        
```

20. Write a program that receives an integer and then determines and prints whether it is even or odd. Note: Do not use the if decision structure.

21. Write a program that reads two integers and then determines and prints whether the first is a multiple of the second. Note: Do not use the if decision structure.

22. The C language can represent uppercase letters, lowercase letters, and a wide variety of special symbols. C internally uses small integers to represent each different character.
    The set of characters that a computer uses and the representations of the integer numbers corresponding to those characters are called the computer's character set. You can print the integer equivalent to the uppercase letter A, for example, by executing the statement

	```c
	printf("%d", 'A').
	```
	
    Write a C program that prints the integers equivalent to some uppercase letters, lowercase letters, and special symbols. At least, determine the integer numbers equivalent to the following set: A BCabc 0 12 $ * + / and the blank space character.

23. Write a program that receives the input of a three-digit number, separates the number into its component digits, and reconstructs a number with the components in reverse order. Example: for an input of 123, the program's output would be 321.

24. Write a program that calculates the product between a given value x and 2 raised to a given value n. Note: Use binary operators.

25. Write a program that reads a time in seconds and prints how many hours, minutes, and seconds are in this time.

26. Create a program to read the x and y coordinates of two points and calculate the distance between the two points on the plane. (Use the function sqrt(number), math.h library).
   - d = √(x₂-x₁)² + (y₂ − y₁)²;

27. Write a program that requests 3 floating-point numbers and prints the arithmetic and geometric mean. (Use the pow(base, exponent) function from the math.h library).