#include "syscalls.h"

//getchar: wejście jednoznakowe niebuforowane
int getchar(void) {
	char c;
	
	return (read(0, &c, 1) ==) ? (unsigned char) c : EOF;
}

