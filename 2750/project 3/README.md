**CS2750 System programming and Tools Fall 2019**

**Project #3 [65 points]**

---------------------------------------------------------------------------------------------------------

Due date is Tuesday, 10/17/2019.

1. [20 points] Write a script named **listEmptyDir.sh** that will do the following: (a) take a name of a directory as a parameter; (b) loop through all files in this directory and display their names; (c) if a file is a directory and has no files in it (empty directory), add the name of this empty directory to the file **EmptyDir.txt** in your current directory. If the number of parameters is not 1 or a parameter is not a directory, display the &quot;usage&quot; message and exit with non-zero status. Your file for submission should demonstrate that you have investigated all possible situations.

1. [25 points] Modify a script **contact\_one.sh** (sec. 5.2) so that instead of using a file with names it will use a HERE document (it may include the same information as the file **myContactlist** ). Another change is that instead of using a positional parameter you read a regular expression from a user (don&#39;t forget about a prompt). Then your code will use that regular expression to check to see if there is a match in your HERE document and output an appropriate message. Do this in a while loop so that the user can keep doing checks. If the user enters DONE as the regular expression, then the script should terminate.

A HERE document is a way to add input to a script easily. It is described in section 5.17 of our textbook, page 144 in my copy. I have uploaded a copy of contact\_one.sh

1. [20 points] For this part, include a text document with the regular expressions for some sed calls that would do the following tasks:

1) Remove any uppercase or lowercase version of my initials (MWH) from a document and replace them with MRH.

2) Write a regular expression that would match any file ending in .jpg

2a) Using the above regular expression, use sed to replace that extension with the extension .jpeg

3) Give a sed command that would output every line in a file that did not start with the letter &#39;a&#39; and does not end with .html

4) Write a line in sed to find all sequences of 10 digits in a row (a raw phone number) and replaces it with a more nicely formatted one. For example, it would replace 1234567890 with (123)456-7890
