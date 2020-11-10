#include "stdbool.h"

double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int n);

bool mx_is_mersenne(int n) {
    if (n <= 0) return false;
    int mer = 0;
    
    int ind = 1;
    while(mer <= n) {
        mer = mx_pow(2, ind) - 1;
        if (mer == n && mx_is_prime(n))
            return true;
        ind++;
    }
    return false;
    
}

