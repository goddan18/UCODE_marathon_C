#include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str);

char* mx_strncpy(char *dst, const char *src, int len);

char *mx_strnew(const int size);

int mx_count_words(const char *str, char delimiter);

char **mx_strsplit(char const *s, char c) {
    if (s == NULL) return NULL;
    int size = mx_count_words(s, c);
    char **arr = (char **)malloc(size * 8);
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
    return arr;
}



