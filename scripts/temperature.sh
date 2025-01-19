#!/bin/sh
output="$(sensors -u | grep -m1 temp1_input | awk '{print $2}')"
echo "^c#FFE7C7^ ${output}"
