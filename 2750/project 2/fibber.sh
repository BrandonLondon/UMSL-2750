#!/bin/bash
#Brandon London 2750

a=0
b=1
while getopts ":h" opt; do
  case ${opt} in
    h  ) echo "Usage: info.sh [Please enter a number between 1 and 100] "
         echo "Usage: info.sh [-h] Display Usage "
         exit
      ;;
  esac
done

if [ "$1" -lt 1 ] || [ "$1" -gt 100 ]; then  
  echo "Number is outside of boundry, please enter a number between 1 and 100"
else
echo "The Fibonacci series is : "
   
for (( i=0; i<$1; i++ )) 
do
    echo -n "$a "
    fn=$((a + b)) 
    a=$b 
    b=$fn 
done
fi




