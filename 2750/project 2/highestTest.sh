#!/bin/bash
#Brandon London 2750
counter=0
arrayMin=($*)
min=${arrayMin[0]}
for i in "${arrayMin[@]}"
do
	if [[ "$i" =~ ^[0-9]+(\.[0-9]+)?$ ]]; then
    		if [[ "$i" -lt "$min" ]]; then
        		min="$i"
			
		fi
else
echo "ERROR:Please Insert A Valid Integer. NO FRACTIONAL INTEGERS"
exit 1
fi
done
for i in "${arrayMin[@]}"
                do
                        if [[ "$i" -eq  "$min" ]]; then
                        counter=$((counter+1))
                        fi
done
echo "$min is the lowest number in the list."
echo "$min appeared $counter time(s) in the list."
