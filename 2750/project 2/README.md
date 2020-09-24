**CS2750 System programming and Tools Fall 2019**

**Project #1 [60 points]**

---------------------------------------------------------------------------------------------------

Due date is Tuesday, September 24th. You should submit your files through canvas.

1. [20 points] Write a Bash shell script **fibber.sh** that will do the following:

1. Takes as a command line option a single integer **n** from 1 to 100; Make sure to verify that this value is in the right range. If it is not, output a usage message
2. Make sure your script parses the -h command line option and outputs a usage message.
3. Using a loop, calculate the n&#39;th Fibonacci value, then output the result.

[https://en.wikipedia.org/wiki/Fibonacci\_number](https://en.wikipedia.org/wiki/Fibonacci_number)

1. [15 points] Write a Bash shell script **highestTest.sh** that will determine the highest value given to the script. It should take in as a command-line argument a series of numbers. This list could be of any length. Your script should start by finding the lowest value in the list of values. Then it should find how many times that value appears in total in the list. It should then output those results. In addition, I want you to detect if any fractional values have been entered and output an error message.

**./highestTest.sh 82 78 73 86 78 73**

**73 is the lowest number in the list**

**It appeared two times.**
