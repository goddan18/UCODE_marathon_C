#include "../inc/minilibmx.h"

bool mx_check_q_in_number(char *num_char, int size, int num) {
    bool res = true;
    if (num < 0) num *= -1;
    for (int i = size - 1; i >= 0; i--) {
        if (num_char[i] == '?') {
            num /= 10;
            continue;
        }
        if (num % 10 + 48 == (int)num_char[i]) {
            num /= 10;
            continue;
        }
        res = false;
    }
    return res;
}
