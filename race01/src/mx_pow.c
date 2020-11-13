#include "minilibmx.h"

long mx_pow(long n, unsigned int pow) {
    long res = 1;
    for(unsigned int i = 0; i < pow; i++)
        res *= n;
    return res;
}

