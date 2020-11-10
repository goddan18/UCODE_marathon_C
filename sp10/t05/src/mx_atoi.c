#include "../inc/minilibmx.h"

long mx_atoi(const char* str) {
    long n = 0;
    long c = 0;
    if (str[0] == '-') {
        c = 1;
        str++;
    }
    while(*str >= '0' && *str <= '9') {
        n *= 10;
        if (!mx_isdigit(*str) || mx_isspace(*str)) return 0;
        n += *str++;
        if (*str && (!mx_isdigit(*str) || mx_isspace(*str))) return 0;
        n -= '0';
    }
    if (*str != '\0') return 0;
    if(c == 1)
        n *= -1;
    return n;
}

