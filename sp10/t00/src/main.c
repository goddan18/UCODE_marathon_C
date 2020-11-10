#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        exit(0);
    }
    int file_desc = open(argv[1], O_RDONLY);
    int size;
    char buffer[1];

    if (file_desc < 0) {
        mx_printerr("error\n");
        exit(0);
    }

    size = read(file_desc, buffer, 1);
    while (size) {
        buffer[size] = '\0';
        write(1, buffer, 1);
        size = read(file_desc, buffer, 1);
    }


    if (close(file_desc) < 0) {
        mx_printerr("error\n");
        exit(0);
    }

    return 0;
}

