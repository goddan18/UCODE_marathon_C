#include "header.h"

int mx_atoi(const char* str) {
    int n = 0;
    int c = 0;
    if (str[0] == '-') {
        n *= -1;
        c = 1;
        str++;
    }
    while(*str >= '0' && *str <= '9') {
        n *= 10;
        if (!mx_isdigit(*str - 48) || mx_isspace(*str)) return 0;
        n += *str++;
        if (*str && (!mx_isdigit(*str - 48) || mx_isspace(*str))) return 0;
        n -= '0';
    }
    if(c == 1)
        n *= -1;
    return n;
}

