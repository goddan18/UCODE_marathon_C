void mx_printchar(char c);

void mx_pyramid(int n) {
    if (n <= 1 || n % 2 != 0) {
        return;
    }
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            for (int j = 0; j < n - 1; j++) {
                mx_printchar(' ');
            }

            mx_printchar('/');
            mx_printchar('\\');
        }
        else if (i != n - 1 && i + 1 <= n / 2) {
            for (int j = 0; j < n - i - 1; j++) {
                mx_printchar(' ');
            }

            mx_printchar('/');

            for (int j = 0; j < i * 2 - 1; j++) {
                mx_printchar(' ');
            }

            mx_printchar('\\');

            for (int j = 0; j < i; j++) {
                mx_printchar(' ');
            }

            mx_printchar('\\');
        }
        else if (i != n - 1) {
            for (int j = 0; j < n - i - 1; j++) {
                mx_printchar(' ');
            }

            mx_printchar('/');

            for (int j = 0; j < i * 2 - 1; j++) {
                mx_printchar(' ');
            }

            mx_printchar('\\');

            for (int j = 0; j < n - i - 1; j++) {
                mx_printchar(' ');
            }

            mx_printchar('|');
        }
        else {
            mx_printchar('/');

            for (int j = 0; j < i * 2 - 1; j++) {
                mx_printchar('_');
            }

            mx_printchar('\\');
            mx_printchar('|');
        }

        mx_printchar('\n');
    }
}

