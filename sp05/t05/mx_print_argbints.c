int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

int main(int argc, char*argv[]) {
    for (int i = 1; i < argc; i++) {
        unsigned j;
        unsigned n = mx_atoi(argv[i]);
        for (j = 1 << 31; j > 0; j = j / 2) {
            (n & j)? mx_printchar('1'): mx_printchar('0');
        }
        mx_printchar('\n');
    }
}

