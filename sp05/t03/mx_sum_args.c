#include "unistd.h"
#include "stdbool.h"

int mx_atoi(const char* str);

bool mx_isspace(char c);

bool mx_isdigit(int c);

void mx_printchar(char c);

void mx_printint(int n);


int main(int argc, char *argv[])
{
    int res = 0;
    for(int i = 1; i < argc; i++) {
        if(*argv[i] == '+') argv[i]++;
        if (mx_atoi(argv[i]) == 0) continue;
        res += mx_atoi(argv[i]);
    }
    mx_printint(res);
    return 0;
}

