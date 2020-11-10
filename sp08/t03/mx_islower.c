#include "hex_to_nbr.h"

bool mx_islower(int c) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char *letter = alphabet;

    while(*letter != '\0' && *letter != c)
        ++letter;
    if (*letter)
        return true;
    return false;
}
