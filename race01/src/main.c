#include "minilibmx.h"

int main(int argc, char *argv[]) {

    if (argc != 5) {
        write(STDERR_FILENO, "usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n",
                mx_strlen("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n"));
        return 0;
    }

    bool delete_minus1 = false, delete_minus2 = false, delete_minus3 = false;
    if (*argv[1] == '-') { argv[1]++; delete_minus1 = true; }
    if (*argv[3] == '-') { argv[3]++; delete_minus2 = true; }
    if (*argv[4] == '-') { argv[4]++; delete_minus3 = true; }

    char **argv_ptr = argv;
    //delete spaces
    for (int i = 1; i < 5; i++)
        argv_ptr[i] = mx_strtrim(argv[i]);

    //checking for operation
    if (mx_strcmp(argv_ptr[2], "+") != 0 
        && mx_strcmp(argv_ptr[2], "-") != 0
            && mx_strcmp(argv_ptr[2], "*") != 0
                && mx_strcmp(argv_ptr[2], "/") != 0
                    && mx_strcmp(argv_ptr[2], "?") != 0) {
                        write(STDERR_FILENO, "Invalid operation: ", mx_strlen("Invalid operation: "));
                        write(STDERR_FILENO, argv_ptr[2], mx_strlen(argv_ptr[2]));
                        write(STDERR_FILENO, "\n", mx_strlen("\n"));
                        exit(0);
                    }

    //ckecking arguments
    if (!mx_check_argv(argv_ptr[1])) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv_ptr[1]);
        mx_printerr("\n");        
        exit(0);
    }
    if (!mx_check_argv(argv_ptr[3])) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv_ptr[3]);
        mx_printerr("\n");
        exit(0);
    }
    if (!mx_check_argv(argv_ptr[4])) {
        mx_printerr("Invalid result: ");
        mx_printerr(argv_ptr[4]);
        mx_printerr("\n");
        exit(0);
    }

    mx_decode(argv_ptr[1], *argv_ptr[2], argv_ptr[3], argv_ptr[4], delete_minus1, delete_minus2, delete_minus3);
    
    for (int i = 1; i < 5; i++) {
        free(argv_ptr[i]);
        argv_ptr[i] = NULL;
    }
    
    return 0;
}

