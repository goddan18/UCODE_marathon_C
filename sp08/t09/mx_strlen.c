#include "only_smiths.h"

int mx_strlen(const char *s) {
	return (*s) ? mx_strlen(++s) + 1 : 0;
}
