#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size);

char* mx_strcpy(char* dst, const char* src);

int mx_strlen(const char *s);

char *mx_strdup(const char *str);

char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2);

void mx_strdel(char **str);

char *mx_concat_words(char **words) {
    if (words[0] == NULL)  {
        return NULL;
    }
    if (words[1] == NULL) {
        return words[0];
    }
    int i = 1;
    char *arr = mx_strdup(words[0]);
    while (words[i] != NULL)
        arr = mx_strjoin(arr, words[i++]);
    return arr;
    
}


