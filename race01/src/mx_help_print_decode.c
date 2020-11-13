#include "minilibmx.h"

void mx_help_print_decode(int i, int j, int k, char operation) {
    mx_printint(i);
    mx_printchar(' ');
    mx_printchar(operation);
    mx_printchar(' ');
    mx_printint(j);
    mx_printstr(" = ");
    mx_printint(k);
    mx_printchar('\n');
}
