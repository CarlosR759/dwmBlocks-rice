#!/bin/sh
output="$(df --total | grep total | awk '{print $5}')"
echo "^c#FFE7C7^ ${output}"

