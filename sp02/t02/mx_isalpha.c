#include "stdbool.h"

bool mx_isalpha(int c) {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      "abcdefghijklmnopqrstuvwxyz";
    char *letter = alphabet;

    while(*letter != '\0' && *letter != c)
        ++letter
    if (*letter)
        return true;
    return false;
}
