#!/bin/sh
output="$(ip addr show | grep wlan0 | awk 'NR==2 {print $2}')"
echo "^c#4CAF50^  ${output} ^c#FFE7C7^"
