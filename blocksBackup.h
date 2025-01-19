//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
 /*   amixer -D pulse sset Master 5%+ */
  {" ", "ip addr show | grep wlan0 | awk 'NR==2 {print $2}'", 30, 0},
	{" ", "grep 'cpu ' /proc/stat | awk '{usage=($2+$4)*100/($2+$4+$5)} END {print int(usage) }'",   3,   0},
	{" ", "sensors -u | grep -m1 temp1_input | awk '{print $2}'",   3,   0},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{" ", "df --total | grep total | awk '{print $5}'", 21600, 0},
	{"	", "upower -i /org/freedesktop/UPower/devices/battery_BAT1 | grep percentage | awk '{print $2}'", 60, 0},
	{"  ", "date '+%b %d (%a) %I:%M%p'",					30,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
