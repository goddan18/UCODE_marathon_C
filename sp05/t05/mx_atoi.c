#include "stdbool.h"
bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    while (mx_isspace(*str))
        str++;
    int res = 0, sign = 1, i = 0;
    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    else if (str[0] == '+') {
        sign = 1;
        i++;
    }
    for (; str[i] != '\0'; ++i) {
        if (mx_isdigit(str[i]))
            res = res*10 + str[i] - '0';
    }
    return sign*res;
}

