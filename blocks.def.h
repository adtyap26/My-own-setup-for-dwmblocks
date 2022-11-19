//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/Scripts/kernel", 	 360,		 2},
	{"", "~/Scripts/openweather-simple.sh", 	 1800,		 5},
	{"", "~/Scripts/record.sh",					1,		5},
	{"", "~/Scripts/cpu.sh", 	 15,		 0},
	{" ", "free -h | awk '/^Mem:/ {print $3\"/\"$2}' | sed s/i//g",	30,		1},
	{"", "~/Scripts/temp.sh",	60,		0},
	{"", "~/Scripts/volume",	0,		10},
	{"", "~/Scripts/micvolume.sh",	0,		10},
	{"", "~/Scripts/wlan.sh",	1,		1},
	{"", "~/Scripts/netspeed.sh",	1,		1},
	{"", "~/Scripts/battery.sh",	5,		3},
	{"", "~/Scripts/clock",					60,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;



