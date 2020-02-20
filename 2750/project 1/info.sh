#!/bin/bash
#Brandon London
#Write a Bash shell script to output various commands introduced in class.

clear
while getopts ":h" opt; do
  case ${opt} in
    h  ) echo "Usage: info.sh [No arguments required] "
         echo "Usage: info.sh [-h] Display Usage "
         exit
      ;;
  esac
done

echo "Name of script: $0" 
echo "Usage: info.sh [No arguments required] "
echo "Usage: info.sh [-h] Display Usage "

echo 
echo -n "Current date and time: " 
date 

echo 
echo -n "Name of user: "
whoami

echo
echo -n "Name of current working directory: " 
echo "$PWD" | sed 's!.*/!!'

echo
echo -n "Name of UNIX machine: " 
hostname

echo
echo -n "Name of login shell: "
echo $SHELL

echo 
echo -n "Contents of the required file: "
file $0

echo 
echo -n "Number of text line in the file: "
wc -l info.sh | awk '{print $1}'

echo 
echo -n "Listing of the required directory: "
ls

echo 
echo -n "Total number of parameters of the script: "
echo $#

echo
echo "Calender for October 2019: "
cal -m 10

path=$(pwd)
echo
echo -n "Disk usage: "
du -h $path

echo 
echo -n "Current number of users in the system: "
who | wc -l

echo
echo -n "Current time: "
date | awk '{print $4}'
