#!/bin/sh
output="$(upower -i /org/freedesktop/UPower/devices/battery_BAT1 | grep percentage | awk '{print $2}')"
echo "^c#FFE7C7^ ${output}"
