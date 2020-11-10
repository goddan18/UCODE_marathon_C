#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) { 
    int total_count_len = argc - 1;
    int total_count_str = 0;
    int total_count_sym = 0;
    if (argc < 2) {
        int count_len = 0;
        int count_str = 0;
        int count_sym = 0; 
        char buffer, helper;
        while (read(0, &buffer, 1)) {
            if (buffer == '\n') {
                count_len++;
                total_count_len++;
            }
            if (mx_isspace(buffer) && !mx_isspace(helper)) {
                count_str++;
                total_count_str++;
            }
            count_sym++;
            total_count_sym++;
            helper = buffer;
        }
        mx_printchar('\t');
        mx_printint(count_len);
        mx_printchar('\t');
        mx_printint(count_str);
        mx_printchar('\t');
        mx_printint(count_sym);
        mx_printchar('\n');
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        int count_len = 1;
        int count_str = 0;
        int count_sym = 0; 

        int file = open(argv[i], O_RDONLY);
        char buffer, helper;

        if (file < 0) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[i]);
            mx_printerr(": open: ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
            exit(0);
        }

        if (read(file, &buffer, 1) < 0 && errno == EISDIR) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[i]);
            mx_printerr(": read: ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
            exit(0);
        }
        if (close(file) < 0) exit(0);
        file = open(argv[i], O_RDONLY);
        while (read(file, &buffer, 1)) {
            if (buffer == '\n') {
                count_len++;
                total_count_len++;
            }
            if (mx_isspace(buffer) && !mx_isspace(helper)) {
                count_str++;
                total_count_str++;
            }
            count_sym++;
            total_count_sym++;
            helper = buffer;
        }
        if (!mx_isspace(helper)) {
            count_str++;
            total_count_str++;
        }
        if (mx_isspace(helper)) {
            count_len--;
            total_count_len--;
        }

        if (close(file) < 0) exit(0);
        mx_printchar('\t');
        mx_printint(count_len);
        mx_printchar('\t');
        mx_printint(count_str);
        mx_printchar('\t');
        mx_printint(count_sym);
        mx_printchar('\t');
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    if (argc > 2) {
        mx_printchar('\t');
        mx_printint(total_count_len);
        mx_printchar('\t');
        mx_printint(total_count_str);
        mx_printchar('\t');
        mx_printint(total_count_sym);
        mx_printstr("\ttotal\n");
    }
    return 0;
}

