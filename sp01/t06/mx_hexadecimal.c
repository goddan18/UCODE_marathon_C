#include "unistd.h"

void mx_only_printable(void) {
	for (int i = 48; i <= 57; i++) {
		mx_printchar(i);
	}
        for (int i = 65; i <= 70; i++) {
                mx_printchar(i);
	}
	write(1, "\n", 1);	
}