#include "stdbool.h"

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    if (num < 0) return false;
    int num_copy = num;
    int num_copy2 = num;
    int res = 0;
    int length = 0;
    do {
        num_copy /= 10;
        length++;
    } while(num_copy != 0);
    
    for(int i = 0; i < length; i++) {
            res += mx_pow(num % 10, length);
            num /= 10;
    }
    if (res == num_copy2) return true;
    else return false;
}
