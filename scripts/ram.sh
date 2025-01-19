#!/bin/sh
output="$(free -h | awk '/^Mem/ { print $3"/"substr($2,1,length($2)-1) }')"
echo "^c#FFE7C7^ ${output}"
