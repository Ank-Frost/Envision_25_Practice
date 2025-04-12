#! /bin/bash

# showinf uptime
a=($(cat /proc/uptime))
h=$( echo "${a[0]}/3600" | bc )
min=$(echo "((${a[0]}%3600)/60)" | bc )

echo "uptime: $h hr and $min min" 

# showing load average 
l=($(cat /proc/loadavg))
echo "loadavg"
for num in {0..2}
do
c=$( echo "${l[num]}*100"  | bc )

echo " $c % " 
done
echo " running processes/total : ${l[3]} "
echo " most recent process (ID) : ${l[4]} "




