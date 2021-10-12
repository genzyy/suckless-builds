//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{"<\x01", "/home/rishit/.suckless/suckless/dwmblocks/scripts/dwmnet", 1, 0},

        {"\x02﬙  ", "/home/rishit/.suckless/suckless/dwmblocks/scripts/upt", 60, 0},

	{"\x03﬙  ", "/home/rishit/.suckless/suckless/dwmblocks/scripts/core", 2, 0},

	{"\x04  ", "/home/rishit/.suckless/suckless/dwmblocks/scripts/memory", 1, 0},

	{"\x05  ", "pamixer --get-volume-human", 1, 0},
	{"\x06 ", "/home/rishit/.suckless/suckless/dwmblocks/scripts/battery", 60, 0},

	{"\x07  ", "/home/rishit/.suckless/suckless/dwmblocks/scripts/clock", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
