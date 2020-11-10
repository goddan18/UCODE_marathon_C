#include "unistd.h"

void mx_printstr(const char *s) {
	int count = 0;
	while (*s) {
		s++;
		count++;
	}
	s -= count;
	write(1, s, count);
}
