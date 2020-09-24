**CS2750 System programming and Tools Fall 2019**

**Project #6 [60 points]**

---------------------------------------------------------------------------------------------------------

Due date is Tuesday, Dec 3rd. This file should just be one executable, with a makefile to compile it. I also want you to take a screenshot of you using a debugger for the project.

**Task:**

In this project you are being asked to write a program that will read in a text file based on a command line argument and then work with that file, producing an output file.

The command line arguments that your program should take are -h, -i and -o. -i lets the person running specify the input file (default should be input.txt). -o lets the user specify the output file (default should be output.txt).

An example of running this project would be, if your executable was called tokener,

./tokener -i data.in -o data.out

to read data from the file data.in and send data to data.out

The input file will consist of many lines of strings. These strings are to be tokenized and then put in another file, with each line tokenized by the very first character in the line. To explain this, let us look at an example input file:

;I;do.

What a hat

!I!like!it!

-I-like

aThatapartyahat!

Go through this file, reading it in line by line using **fgets**. Take the first character of the string and then tokenize the rest of the string based on that character, either using strtok or makeargv.c. Then save that data to a file, line by line, so the output of the above data would be to a file as follows:

I

Do

What

A

Hat

I

like

it

Th

t

p

rtyh

t!

**Details:**

You only need one source file, as discussed. However, you also must have a makefile that will compile the project for me. If you do not include a makefile your project will not be run.

In addition, I want you to take a screenshot of you setting a breakpoint and then examining some array (c-string or otherwise) at that point in your code using the GDB. If you do not do this, you will lose 10 points.

**Submission:**

Submit the source file, your makefile, and the proof of debugging as separate files in canvas (not zipped up please).
