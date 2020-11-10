#include <stdbool.h>

int mx_count_words(const char *str, char delimiter);

int mx_count_words(const char *str, char delimiter) {
    int state = false;  
    int count = 0;
    while (*str) {
        if (*str == delimiter)
            state = false;
        else if (state == false) {
            state = true;
            count++;
        }
        str++;
    }
    return count;  
}

