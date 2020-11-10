#include "get_address.h"

char *mx_get_address(void *p) {
    unsigned long a = (unsigned long)(p);
    char *temp = mx_nbr_to_hex(a);
    char *res = mx_strnew(mx_strlen(temp) + 2);
    res[0] = '0';
    res[1] = 'x';
    res += 2;
    res = mx_strcpy(res, mx_nbr_to_hex(a));
    res -= 2;
    free(temp);
    return res;
}
