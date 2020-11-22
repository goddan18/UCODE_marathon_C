#include "header.h"

int num_length(int number) {
    if (number < 0) {
        number *= -1;
    }
    int length = 0;
    while (number != 0) {
        length++;
        number /= 10;
    }
    return length;
}
