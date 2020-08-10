// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    //	{"","/home/dhruv/.config/status/bright",	0,		11},
    {"", "/home/dhruv/.config/status/temp", 2, 0},
    {"", "/home/dhruv/.config/status/ram", 1, 14},
    {"", "/home/dhruv/.config/status/date", 1, 0},
    {"", "/home/dhruv/.config/status/mpc", 1, 12},
    {"", "/home/dhruv/.config/status/vol", 0, 10},
    {"", "/home/dhruv/.config/status/wifi", 30, 0},
    {"", "/home/dhruv/.config/status/bat", 30, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd
// ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid
// dwmblocks & }
