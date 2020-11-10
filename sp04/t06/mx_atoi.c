#include "stdbool.h"

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char* str) {
    int n = 0;
    while( *str >= '0' && *str <= '9' ) {
        n *= 10;
        n += *str++;
        n -= '0';
    }
    return n;
}

