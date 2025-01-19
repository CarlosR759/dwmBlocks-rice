//Modify this file to change what commands output to your statusbar, and recompile using the make command.
#define SC(route) "$HOME/programs/dwmblocks/scripts/" #route
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
 /*   amixer -D pulse sset Master 5%+ */
  	{"", SC("wifi.sh") ,				        30,  	 0},
	{" ", SC("cpuUsage.sh"),   				3,       0},
	{" ", SC("temperature.sh"),			        3,       0},
	{" ", SC("ram.sh"),				        30,      0},
	{" ", SC("memory.sh"),				        21600,   0},
	//{" ", SC("battery.sh"),				60,      0},  Uncomment if you have battery in your system
	{" ", SC("date.sh"),					30,    	 0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
