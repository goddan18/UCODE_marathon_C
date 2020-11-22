#include "header.h"

int find_num_by_index(int number, int index) {
    int num_copy = number;
    int length = 0;
    while (num_copy != 0) {
        num_copy /= 10;
        length++;
    }
    if (index < 0 || length <= index) {
        return -404;
    }
    for (int i = 0; i < length - index - 1; i++) {
        if (number < 0) {
            return -404;
        }
        number /= 10;
    }
    return number % 10;
}
