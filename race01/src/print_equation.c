#include "header.h"

void print_equation(char *operand1, char *operation, char *operand2, char *result,
                        int operand1_length, int operand2_length, int result_length) {

    if (*operation == '?') {
        print_equation(operand1, "+", operand2, result,
                        operand1_length, operand2_length, result_length);
        print_equation(operand1, "-", operand2, result,
                        operand1_length, operand2_length, result_length);
        print_equation(operand1, "*", operand2, result,
                        operand1_length, operand2_length, result_length);
        print_equation(operand1, "/", operand2, result,
                        operand1_length, operand2_length, result_length);
        return;
    }

    bool isIBelowZero = false;
    if (operand1[0] == '-') {
        isIBelowZero = true;
        operand1++;
        operand1_length--;
    } 
    bool isJBelowZero = false;
    if (operand2[0] == '-') {
        isJBelowZero = true;
        operand2++;
        operand2_length--;
    }
    bool isKBelowZero = false;
    if (result[0] == '-') {
        isKBelowZero = true;
        result++;
        result_length--;
    }

    long long first_number = mx_atoi(operand1);
    long long second_number = mx_atoi(operand2);
    long long third_number = mx_atoi(result);

    for (long long i = 0; i < mx_pow(10, operand1_length); i++) {
        if (first_number > 0) {
            i = first_number;
        }
        char *i_str = mx_itoa(i);
        int i_str_length = mx_strlen(i_str);
        bool isCorrectI = true;

        for (int i_i = 0; i_i < operand1_length - i_str_length; i_i++) {
            if (mx_isdigit(operand1[i_i]) && operand1[i_i] != '0') {
                isCorrectI = false;
                break;
            }
        }

        for (int i_i = operand1_length - i_str_length, i_str_i = 0; i_i < operand1_length; i_i++, i_str_i++) {
            if (operand1[i_i] != '?' && operand1[i_i] != i_str[i_str_i]) {
                isCorrectI = false;
                break;
            }
        }
        free(i_str);
        i_str = NULL;

        if (!isCorrectI) {
            continue;
        }

        for (long long j = 0; j < mx_pow(10, operand2_length); j++) {  
            if (second_number > 0) {
                j = second_number;
            }

            char *j_str = mx_itoa(j);
            int j_str_length = mx_strlen(j_str);
            bool isCorrectJ = true;

            for (int j_i = 0; j_i < operand2_length - j_str_length; j_i++) {
                if (mx_isdigit(operand2[j_i]) && operand2[j_i] != '0') {
                    isCorrectJ = false;
                    break;
                }
            }

            for (int j_i = operand2_length - j_str_length, j_str_i = 0; j_i < operand2_length; j_i++, j_str_i++) {
                if (operand2[j_i] != '?' && operand2[j_i] != j_str[j_str_i]) {
                    isCorrectJ = false;
                    break;
                }
            }

            free(j_str);
            j_str = NULL;

            if (!isCorrectJ) {
                continue;
            }
            
            for (long long k = 0; k < mx_pow(10, result_length); k++) {
                if (third_number > 0) {
                    k = third_number;
                }
                char *k_str = mx_itoa(k);
                int k_str_length = mx_strlen(k_str);
                bool isCorrectK = true;

                for (int k_i = 0; k_i < result_length - k_str_length; k_i++) {
                    if (mx_isdigit(result[k_i]) && result[k_i] != '0') {
                        isCorrectK = false;
                        break;
                    }
                }

                for (int k_i = result_length - k_str_length, k_str_i = 0; k_i < result_length; k_i++, k_str_i++) {
                    if (result[k_i] != '?' && result[k_i] != k_str[k_str_i]) {
                        isCorrectK = false;
                        break;
                    }
                }

                free(k_str);
                k_str = NULL;

                if (!isCorrectK) {
                    continue;
                }

                //output
                if (isIBelowZero) {
                    i *= -1;
                }
                if (isJBelowZero) {
                    j *= -1;
                }
                if (isKBelowZero) {
                    k *= -1;
                }

                if (*operation == '+') {
                    if (i + j == k) {
                        mx_printint(i);
                        mx_printstr(" + ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '-') {
                        if (i - j == k) {
                        mx_printint(i);
                        mx_printstr(" - ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '*') {
                        if (i * j == k) {
                        mx_printint(i);
                        mx_printstr(" * ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                else if (*operation == '/') {
                    if (j != 0 && i / j == k) {
                        mx_printint(i);
                        mx_printstr(" / ");
                        mx_printint(j);
                        mx_printstr(" = ");
                        mx_printint(k);
                        mx_printchar('\n');
                    }
                }
                
                if (isIBelowZero) {
                    i *= -1;
                }
                if (isJBelowZero) {
                    j *= -1;
                }
                if (isKBelowZero) {
                    k *= -1;
                }
                if (third_number > 0) {
                    break;
                }
            }
            if (second_number > 0) {
                break;
            }
        }
        if (first_number > 0) {
            break;
        }
    }

    if (isIBelowZero) {
        operand1--;
    }
    if (isJBelowZero) {
        operand2--;
    }
    if (isKBelowZero) {
        result--;
    }

}
