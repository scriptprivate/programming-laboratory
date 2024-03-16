### Hierarchy of Arithmetic Operators in C

C programming follows a hierarchy of arithmetic operations similar to the conventional order of mathematical operations. This means that some arithmetic operations take precedence over others. The hierarchy is as follows:

1. Parentheses ()
2. Unary Operators (++ and --)
3. Multiplication, Division, and Modulus (*, /, and %)
4. Addition and Subtraction (+ and -)

The higher the position of an operation in this hierarchy, the greater precedence it has. Arithmetic operators of equal precedence are evaluated from left to right. 

---

Keeping that in mind, it's possible to answer the question below:

1. Determine the order of operations for each of the following C statements and show the value of x after each statement is executed.

   - `x = 7 + 3 * 6 / 2 - 1`
     - Order of operations:
       1. Multiplication: `3 * 6` = 18
       2. Division: `18 / 2` = 9
       3. Addition: `7 + 9` = 16
       4. Subtraction: `16 - 1` = 15
     - Value of `x`: 15

   - `x = 2 % 2 + 2 * 2 - 2 / 2`
     - Order of operations:
       1. Modulus: `2 % 2` = 0
       2. Multiplication: `2 * 2` = 4
       3. Division: `2 / 2` = 1
       4. Addition and subtraction (same precedence, from left to right): `0 + 4 - 1` = 3
     - Value of `x`: 3

   - `x = (3 * 9 * (3 + (9 * 3 / (3))))`
     - Order of operations (taking parentheses into account):
       1. Inner parentheses: `9 * 3` = 27
       2. Division: `27 / 3` = 9
       3. Addition: `3 + 9` = 12
       4. Outer multiplication: `3 * 9 * 12` = 324
     - Value of `x`: 324