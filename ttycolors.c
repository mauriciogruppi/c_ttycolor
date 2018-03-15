#include <stdio.h>
#include <stdlib.h>

/*MORE INFO:
http://en.wikipedia.org/wiki/ANSI_escape_code
http://stackoverflow.com/questions/5947742/how-to-change-the-output-color-of-echo-in-linux*/
const char* boldblacktty = "\033[1;30m";   // tell tty to switch to bold black
const char* lightredtty = "\033[1;31m";   // tell tty to switch to bold red
const char* lightgreentty="\033[1;32m";   // tell tty to switch to bright green
const char* redtty="\033[0;31m";
const char* greentty="\033[0;32m";
const char* bluetty="\033[34m";   // tell tty to switch to blue
const char* lightbluetty="\033[1;34m";
const char* lightcyantty="\033[1;36m";
const char* cyantty="\033[0;36m";
const char* purpletty="\033[0;35m";
const char* lightpurpletty="\033[1;35m";
const char* orangetty="\033[0;33m";
const char* yellowtty="\033[1;33m";
const char* magentatty="\033[1;35m";   // tell tty to switch to bright magenta
const char* yellowbgtty="\033[1;43m";   // tell tty to switch to bright yellow background
const char* underlinetty="\033[4m";   // tell tty to switch to underline
const char* deftty="\033[0m";

int main()
{
	//USAGE
	printf("%sThis %s is %s coo%sooo%sooo%sool!%s.\nBack to normal.\n",redtty,cyantty,lightgreentty,yellowtty,purpletty,orangetty,deftty);
	
	return 0;
}