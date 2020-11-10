int mx_strlen(const char *s);

char *mx_strchr(const char *s, int c);

void mx_printchar(char c);

void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    argc = 0;
    while (mx_strchr(argv[0], '/') != 0)
        argv[0]++;
    mx_printstr(argv[0]);
    mx_printchar('\n');
}

