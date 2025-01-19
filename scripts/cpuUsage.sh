#!/bin/sh
output="$(grep 'cpu ' /proc/stat | awk '{usage=($2+$4)*100/($2+$4+$5)} END {print int (usage) }')"
echo "^c#FFE7C7^ ${output}"
