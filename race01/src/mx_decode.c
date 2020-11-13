#include "minilibmx.h"

void mx_decode(char *operand1, char operation, char *operand2, char *result, bool delete_minus1, bool delete_minus2, bool delete_minus3) {

    bool is_q1 = false;
    bool is_q2 = false;
    bool is_qr = false;
    char *temp = operand1;
    while (*temp)
        if (*temp++ == '?') is_q1 = true;

    temp = operand2;
    while (*temp)
        if (*temp++ == '?') is_q2 = true;

    temp = result;
    while (*temp)
        if (*temp++ == '?') is_qr = true;


    mx_print_decode(is_q1, is_q2, is_qr, operand1, operation, operand2, result, delete_minus1, delete_minus2, delete_minus3);

    if (operation == '?') {
        mx_print_decode(is_q1, is_q2, is_qr, operand1, '+', operand2, result, delete_minus1, delete_minus2, delete_minus3);
        mx_print_decode(is_q1, is_q2, is_qr, operand1, '-', operand2, result, delete_minus1, delete_minus2, delete_minus3);
        mx_print_decode(is_q1, is_q2, is_qr, operand1, '*', operand2, result, delete_minus1, delete_minus2, delete_minus3);
        mx_print_decode(is_q1, is_q2, is_qr, operand1, '/', operand2, result, delete_minus1, delete_minus2, delete_minus3);
    }



}
