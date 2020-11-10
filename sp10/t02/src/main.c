#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        int size;
        char buffer[1];
        size = read(0, buffer, 1);
        while (size) {
            write(1, buffer, 1);
            size = read(0, buffer, 1);
        }
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        int file1 = open(argv[i], O_RDONLY);
        int size;
        char buffer[1];
        if (file1 < 0) {
            mx_printerr("mx_cat: ");
            mx_printerr(argv[i]);
            mx_printerr(": No such file or directory\n");
            exit(0);
        }
        size = read(file1, buffer, 1);
        while (size) {
            write(1, buffer, 1);
            size = read(file1, buffer, 1);
        }
        if (close(file1) < 0) {
            mx_printerr("error\n");
            exit(0);
        }
    }
    return 0;
}

