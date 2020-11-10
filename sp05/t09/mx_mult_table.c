#include "stdbool.h"

int mx_strlen(const char *s);
void mx_printchar(char c);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char* str);
void mx_printint(int n);


int main(int argc, char *argv[]) {
    if (argc != 3) return 0;
    if (!mx_isdigit(*argv[1] - 48) || !mx_isdigit(*argv[2] - 48)) return 0;
    int c, a = mx_atoi(argv[1]);
    int b = mx_atoi(argv[2]);
    if (a > 10 || b > 10 || a <= 0 || b <= 0) return 0;
    
    if (a > b) {
        c = a;
        a = b;
        b = c;
    }

    for (int i = a; i <= b; i++) {
        for (int j = a; j <= b; j++) {
            c = i * j;
            mx_printint(c);
            if (j != b) mx_printchar('\t');
        }
        mx_printchar('\n');
    }

    return 0;
}


