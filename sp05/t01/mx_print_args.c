#include "unistd.h"

int mx_strlen(const char *s);

void mx_printchar(char c);

void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    if(argc <= 1) 
        return 0;
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}

