**CS2750 System programming and Tools Fall 2019**

**Project #4 [35 points]**

---------------------------------------------------------------------------------------------------------

Due date is Tuesday, Nov 5th.

1. [10 points] Write a program that takes its command-line arguments and starts by printing them in reverse order. For example, if your executable is called reverse and you run it by:

./reverse one two three

The output should be:

three two one

1. [15 points] Adding to your program in part A, go through the command line arguments and find the largest and smallest arguments (by lexographic order). Note that you should not need to sort your arguments, but instead compare them and save the smallest and largest strings as you go through. For example, if called with ./reverse one two three:

It would display the output for part A:

Three two one

And then it would display

The smallest string was: one

The largest string was: two

1. [15 points] Adding to your program in part B, I want you to now prompt the user for if they entered all integers as command line arguments. That is, give them a Y/N prompt. If they enter Y, then they are saying that they did in fact enter numbers. So for example, they ran your program something like:

./reverse 27 13 15

Now find the smallest and largest numbers, which you can do either by allocating an array and converting the strings to numbers or by converting them as you do the comparison. Then output the result. For example:

The smallest integer was: 13

The largest integer was: 27
