#include "../inc/minilibmx.h"

char **mx_strsplit(char const *s, char c) {
    if (s == NULL) return NULL;
    int size = mx_count_words(s, c);
    char **arr = (char **)malloc((size + 1) * 8);
    int count = 0;
    
    for(int i = 0; i < size; i++) {
        count = 0;
        while (*s == c) {
            s++;
        }

        while (*s != c) {
            s++;
            count++;
        }
        s -= count;
        arr[i] = (char *)malloc(count);
        for(int j = 0; j < count; j++)
            arr[i][j] = *s++;
        
        
    }
    arr[size] = NULL;
    return arr;
}



