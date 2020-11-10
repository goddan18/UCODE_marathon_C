#include "unistd.h"

void mx_only_printable(void) {
	for (int i = 126; i >= 32; i--) {
		write(STDOUT_FILENO, &i, 1);
	}	
	write(1, "\n", 1);
}

