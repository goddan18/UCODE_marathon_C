#include "minilibmx.h"

bool mx_check_argv(char *str) {
    while (*str) {
        if (*str != '?' && (*str < '0' || *str >'9'))
            return false;
        str++;
    }
    return true;

}
