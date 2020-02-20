#!/bin/bash
##consult myContactList
#Here Document
IFS='' read -r -d '' doc <<'myContactList'
Tanjiro Kamado, 213 Infinity Train, DemonsArePeople@dankDemons.com, 6666666666
Muzan Kibutsuji, 666 Demon Hell, IHateHanafudaEarings@Evil.com, 6969696969
Inosuke HashBira, 12 woods lane, BeastBreathingIsTooGOOD@forest.com, 4204206969
Zenitsu Agatsuma, 132 abc street, WhyAmIliterallytheworst@gmail.com, 2323232323
myContactList

echo "Please enter a pattern or type \"DONE\" to exit."
read pattern

while [[ $pattern != 'DONE' ]]
do
	if [[ $(echo "$doc" | grep "$pattern") ]]
	then
		echo "$doc" | grep "$pattern"
	else
		echo "Not in contacts."
	fi

	pattern=''
	echo "Enter a pattern or Type \"DONE\" to exit."
	read pattern
done


