//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
// add 34 to signal number to use with kill
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    /* {"", "/home/dhruv/.config/status/tmp", 1, 17}, */
    {"", "/home/dhruv/.local/ubin/pomo.sh clock", 1, 0},
    /* {"", "/home/dhruv/.config/status/timeleft", 1, 18}, */
    {"", "/home/dhruv/.config/status/date", 1, 16},
    {"", "/home/dhruv/.config/status/mic", 0, 10},
    {"", "/home/dhruv/.config/status/cpu", 2, 19},
    {"", "/home/dhruv/.config/status/ram", 10, 14},
    {"", "/home/dhruv/.config/status/temp", 2, 15},
    {"", "/home/dhruv/.config/status/vol", 0, 10},
    {"", "/home/dhruv/.config/status/mpc", 0, 12},
    /* {"", "/home/dhruv/.config/status/wifi", 60, 13}, */
    {"", "/home/dhruv/.config/status/bat", 120, 17},
    {"", "/home/dhruv/.config/status/uuname", 0, 0},
    // {"", "/home/dhruv/.config/status/bright", 0, 11},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
