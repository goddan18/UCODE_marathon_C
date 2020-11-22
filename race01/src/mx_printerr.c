#include "header.h"

void mx_printerr(const char *s) {
    while (*s)
        write(STDERR_FILENO, s++, 1);
}
