
# Computer Science I
## Lab 2.0 Worksheet

Name(s) and Login(s):
Ryan Brown


1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

  80 years old



2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

  71 years old


3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

  example 1: inputing a the birthday Febuary 31 works but Febuary dosent have 31 days in it
  example 2: Typing out the month instead of using digits puts down the month as 00



4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes
  range: -32768 to 32767
* `int`
  size: 4 bytes
  range: -2147483648 to 2147483647
* `long int`
  size: 8 bytes
  range: -9223372036854775808 to 9223372036854775807
* `float`
  size: 4 bytes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
    88.96 GBP
    14374 JYP

  b) $1,000.52
    355.68 GBP
    57472 JYP

  c) $968,410.12
    344269.80 GBP
    55627898 JYP



6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?

  you would not beable to because the conversion rate for pounds and yen are not whole numbers




7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.
What value do you get?  Is this result correct?

  the area is 0 square units. This is not the correct resut

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

  The program does not give the correct result because "area = 1/2 * base * height;" but because 1 and 2 are integers the answer is alos an integer, 0. it should be "area = (double)1/2 * base * height;

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
