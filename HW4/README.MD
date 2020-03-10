1. In C there are four primitive data types - int, char, float, double - and four type modifiers - short, long,
unsigned, signed.
More than one type modifier can be appended to each of the primitive types.
However, not all combinations are possible.
In view of this, understand what combinations of types and type modifiers are possible by declaring a variable for
each possibility and by looking at the compiler messages.
After that, write a program that prints the byte size of each of the admissible combinations.


2. Let a, b, c be int variables.
Operators in C are characterized by precedence levels. (see e.g. man operator, or Chapter 2 in Kernighan and
Ritchie).
Which operators have higher precedence in the following expressions? If they have the same precedence, determine
which one is operated first by looking at the associativity.
Write a program where you just write these expressions and rewrite them with round parentheses, to show explic-
itly the precedence of the action of the operators.
a = b + c;
a + b - c;
a + b * c;
a + b * a < b;
a + b && a < b;
a * c != b
 || a > b
E.g.:
a = b + c;
is explicitly operated as
a = (b + c);


3. Write a program that computes the area of a triangle. Define variables of type double where you assign some
height and width values, and print the result to terminal using the printf function.

4. Write the same program as before, where instead you define height and width with #define preprocessor direc-
tives.

5. Write the same program as before, but read height and width from the keyboard using the scanf function.

6. Write a C program that does the following.
• Define three preprocessor variables US, EU, UK with values 1, 2 and 3 respectively, using the #define direc-
tive.
• Then, define a preprocessor variable AREA with one of those variables.
• Then, using the #if... #elif... #endif preprocessor construct, print to terminal “The currency is
Dollar”, “The currency is Euro”, “The currency is Pound” by comparing the value of AREA with the values of
US, EU, UK respectively (use the preprocessor == operator).
Remark: although the code would still work, it is good practice to put the above #define directives before and
not inside the body of the main() function.
What happens if you put a wrong piece of code inside a block that is not activated by the preprocessor?

7. Implement the same program as before, but use the C if ...
 else if ... construct instead.
What happens if you put a wrong piece of code in a block of the if construct that is not executed?


8. Implement a C program for the fixed point method for the solution of nonlinear equations using a do-while loop,
instead of the while loop we used in class.
