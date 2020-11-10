#include "unistd.h"

void mx_print_alphabet(void) {
	int a = 65;

	for (int i = 0; i < 13; i++) {
		mx_printchar(a);
		a += 33;
                mx_printchar(a);
		a -= 31;
	}
	write(1, "\n", 1);
}
