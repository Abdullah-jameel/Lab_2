
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):
Abdullah Jameel     Abdullah-jameel


1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

Answer:
       Today is 2023/10/05
Your birthday was 1941/09/09
Hello, DennisRitchie.  You are 0 years, 0 weeks, and 0 days old today


2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

Answer:
       Today is 2023/10/05
Your birthday was 1950/12/30
Hello, BjarneStroustrup.  You are 0 years, 0 weeks, and 0 days old today



3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.
Answer for first input:

        .\a.exe Ahmed 0919 12 7
Today is 2023/10/07
Your birthday was 0919/12/07
Hello, Ahmed.  You are 0 years, 0 weeks, and 0 days old today. 

Answer for second input:

.\a.exe Dennis 2022 13 5
Today is 2023/10/07
Your birthday was 
Hello, Dennis.  You are 0 years, 39 weeks, and 2 days old today.






4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 byte
  range: -32768 to 32767
* `int`
  size: 4 bytes
  range: -2147483648 to 2147483647
* `long int`
  size: 4 bytes
  range: 0 to 4294967295
* `float`
  size:  4 bytes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25

Answer:

Please input the total amount of US Dollars:250.25
Fee is 25.02
88.96 GBP
14375 JPY
  b) $1,000.52

  Answer:

  Please input the total amount of US Dollars:1000.52
Fee is 100.05
355.68 GBP
57472 JPY

  c) $968,410.12

  Answer:

  Please input the total amount of US Dollars:968410.12
Fee is 96841.02
344269.81 GBP
55627900 JPY



6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?

Answer:

 If we use only only 'int' data type the program will not give correct values of Fee, GBP and JPY because the value of US national debt which we will write in variable 'dollars' is too large that it is out of "int's" range which is "-2147483648 to 2147483647" as a result of this when we run the program compiler gives some trash values of Fee, GBP and JPY. 



7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?

Answer:

i got '0.000000' as result. This result is not Correct. As 1 and 2 are integers in area formula so when 1 divides by 2 answer will come in integer 0 and whole result will also become as 0. By editing program bytype casting method if we either add .0 with 1 and 2 or write f with them we can get correct answer.

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

Answer:

The program doesn't give Correct result. As 1 and 2 are integers in area formula so when 1 divides by 2 answer will come in integer 0 and whole result will also become as 0. By editing program bytype casting method if we either add .0 with 1 and 2 or write f with them we can get correct answer.


c) Fix the program by editing the `area.c` source
code so that the program produces correct results.

Answer:

/**
 * Author: Abdullah Jameel
 * 
 * This program prompts the user to enter the
 * base and the height of a triangle and computes
 * its area using the well-known formula
 *  1/2 * base * height
 *
 */

#include<stdio.h>

int main() {

  double area, base, height;

  printf("Please enter the base of a triangle: ");

  scanf("%lf", &base);

  printf("Please enter the height of a triangle: ");

  scanf("%lf", &height);

  area = 1.0/2.0 *base * height;

  printf("The area is %f square units.\n", area);

  return 0;
}

