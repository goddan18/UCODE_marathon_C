#include "create_new_agents.h"

char *mx_strdup(const char *str) {
    if (str == NULL) return NULL;   
    char *dst = mx_strnew(mx_strlen(str));  
    mx_strcpy(dst, str);                      
    return dst;
}

