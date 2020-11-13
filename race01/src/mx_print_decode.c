#include "minilibmx.h"

void mx_print_decode(bool is_q1, bool is_q2, bool is_qr, char *operand1, char operation, char *operand2, char *result, bool delete_minus1, bool delete_minus2, bool delete_minus3) {
    long length1 = mx_strlen(operand1);
    long length2 = mx_strlen(operand2);
    long lengthr = mx_strlen(result); 
    long num1 =  mx_atoi(operand1);
    long num2 =  mx_atoi(operand2);
    long numr =  mx_atoi(result);


    if (is_q1 && !is_q2 && !is_qr) {
        long count1 = mx_pow(10, length1);
        count1--;

        if (operation == '+')
            for (long i = 0; i <= count1; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &numr);
                if (i + num2 == numr) {
                    if (mx_check_q_in_number(operand1, length1, i))
                        mx_help_print_decode(i, num2, numr, operation);
                }
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &numr); 
            }

        if (operation == '-')
            for (long i = 0; i <= count1; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &numr);
                if (i - num2 == numr) {
                    if (mx_check_q_in_number(operand1, length1, i))
                        mx_help_print_decode(i, num2, numr, operation);
                } 
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &numr); 
            }

        if (operation == '*')
            for (long i = 0; i <= count1; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &numr);
                if (i * num2 == numr) {
                    if (mx_check_q_in_number(operand1, length1, i))
                        mx_help_print_decode(i, num2, numr, operation);
                }  
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &numr);
            }

        if (operation == '/')
            for (long i = 0; i <= count1; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &numr);
                if (num2 != 0 && i / num2 == numr) {
                    if (mx_check_q_in_number(operand1, length1, i))
                        mx_help_print_decode(i, num2, numr, operation);
                }  
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &numr);
            }
        return;
    }

    if (!is_q1 && is_q2 && !is_qr) {
        long count2 = mx_pow(10, length2);
        count2--;

        if (operation == '+')
            for (long i = 0; i <= count2; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &numr);
                if (num2 + i == numr) {
                    if (mx_check_q_in_number(operand2, length2, i))
                        mx_help_print_decode(num1, i, numr, operation);
                }  
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &numr);
            }

        if (operation == '-')
            for (long i = 0; i <= count2; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &numr);
                if (num2 - i == numr) {
                    if (mx_check_q_in_number(operand2, length2, i))
                        mx_help_print_decode(num1, i, numr, operation);
                }  
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &numr);
            }

        if (operation == '*')
            for (long i = 0; i <= count2; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &numr);
                if (num2 * i == numr) {
                    if (mx_check_q_in_number(operand2, length2, i))
                        mx_help_print_decode(num1, i, numr, operation);
                }  
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &numr);
            }

        if (operation == '/')
            for (long i = 0; i <= count2; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &numr);
                if (i != 0 && num2 / i == numr) {
                    if (mx_check_q_in_number(operand2, length2, i))
                        mx_help_print_decode(num1, i, numr, operation);
                } 
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &numr); 
            }
        return;
    }

    if (!is_q1 && !is_q2 && is_qr) {
        long countr = mx_pow(10, lengthr);
        countr--;

        if (operation == '+')
            for (long i = 0; i <= countr; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &num2, &i);
                if (num1 + num2 == i) {
                    if (mx_check_q_in_number(result, lengthr, i))
                        mx_help_print_decode(num1, num2, i, operation);
                } 
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &num2, &i); 
            }

        if (operation == '-')
            for (long i = 0; i <= countr; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &num2, &i);
                if (num1 - num2 == i) {
                    if (mx_check_q_in_number(result, lengthr, i))
                        mx_help_print_decode(num1, num2, i, operation);
                }  
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &num2, &i);
            }

        if (operation == '*')
            for (long i = 0; i <= countr; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &num2, &i);
                if (num1 * num2 == i) {
                    if (mx_check_q_in_number(result, lengthr, i))
                        mx_help_print_decode(num1, num2, i, operation);
                }  
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &num2, &i);
            }

        if (operation == '/')
            for (long i = 0; i <= countr; i++) {
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &num2, &i);
                if (num2 != 0 && num1 / num2 == i) {
                    if (mx_check_q_in_number(result, lengthr, i))
                        mx_help_print_decode(num1, num2, i, operation);
                }  
                mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &num2, &i);
            }
        return;
    }

    if (is_q1 && is_q2 && !is_qr) {
        long count1 = mx_pow(10, length1);
        long count2 = mx_pow(10, length2);
        count1--;
        count2--;   

        if(operation == '+')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= count2; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &numr);
                    if (i + j == numr) {
                        if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(operand2, length2, j))
                            mx_help_print_decode(i, j, numr, operation);
                    }
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &numr);  
                }
            }

        if(operation == '-')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= count2; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &numr);
                    if (i - j == numr) {
                        if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(operand2, length2, j))
                            mx_help_print_decode(i, j, numr, operation);
                    } 
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &numr); 
                }
            }

        if(operation == '*')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= count2; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &numr);
                    if (i * j == numr) {
                        if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(operand2, length2, j))
                            mx_help_print_decode(i, j, numr, operation);
                    }  
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &numr);
                }
            }

        if(operation == '/')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= count2; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &numr);
                    if (j != 0 && i / j == numr) {
                        if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(operand2, length2, j))
                            mx_help_print_decode(i, j, numr, operation);
                    } 
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &numr); 
                }
            }
        return;
    }

    if (is_q1 && !is_q2 && is_qr) {
        long count1 = mx_pow(10, length1);
        long countr = mx_pow(10, lengthr);
        count1--;
        countr--;


        if(operation == '+')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= countr; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &j);
                    if (i + num2 == j) {
                        if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(result, lengthr, j))
                            mx_help_print_decode(i, num2, j, operation);
                    } 
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &j); 
                }
            }

        if(operation == '-')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= countr; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &j);
                    if (i - num2 == j) {
                        if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(result, lengthr, j))
                            mx_help_print_decode(i, num2, j, operation);
                    } 
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &j); 
                }
            }

        if(operation == '*')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= countr; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &j);
                    if (i * num2 == j) {
                        if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(result, lengthr, j))
                            mx_help_print_decode(i, num2, j, operation);
                    }  
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &j);
                }
            }

        if(operation == '/')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= countr; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &j);
                    if (num2 != 0 && i / num2 == j) {
                        if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(result, lengthr, j))
                            mx_help_print_decode(i, num2, j, operation);
                    }  
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &num2, &j);
                }
            }
        return;
    }

    if (!is_q1 && is_q2 && is_qr) {
        long count2 = mx_pow(10, length2);
        long countr = mx_pow(10, lengthr);
        count2--;
        countr--;   

        if(operation == '+')
            for (long i = 0; i <= count2; i++) {
                for (long j = 0; j <= countr; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &j);
                    if (num1 + i == j) {
                        if (mx_check_q_in_number(operand2, length2, i) && mx_check_q_in_number(result, lengthr, j))
                            mx_help_print_decode(num1, i, j, operation);
                    }  
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &j);
                }
            }

        if(operation == '-')
            for (long i = 0; i <= count2; i++) {
                for (long j = 0; j <= countr; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &j);
                    if (num1 - i == j) {
                        if (mx_check_q_in_number(operand2, length2, i) && mx_check_q_in_number(result, lengthr, j))
                            mx_help_print_decode(num1, i, j, operation);
                    } 
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &j); 
                }
            }

        if(operation == '*')
            for (long i = 0; i <= count2; i++) {
                for (long j = 0; j <= countr; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &j);
                    if (num1 * i == j) {
                        if (mx_check_q_in_number(operand2, length2, i) && mx_check_q_in_number(result, lengthr, j))
                            mx_help_print_decode(num1, i, j, operation);
                    }  
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &j);
                }
            }

        if(operation == '/')
            for (long i = 0; i <= count2; i++) {
                for (long j = 0; j <= countr; j++) {
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &j);
                    if (i != 0 && num1 / i == j) {
                        if (mx_check_q_in_number(operand2, length2, i) && mx_check_q_in_number(result, lengthr, j))
                            mx_help_print_decode(num1, i, j, operation);
                    }  
                    mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &num1, &i, &j);
                }
            }
        return;
    } 
    
    if (is_q1 && is_q2 && is_qr) {
        long count1 = mx_pow(10, length1);
        long count2 = mx_pow(10, length2);
        long countr = mx_pow(10, lengthr);
        count1--;
        count2--; 
        countr--;  

        if(operation == '+')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= count2; j++) {
                    for (long k = 0; k <= countr; k++) {
                        mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &k);
                        if (i + j == k) {
                            if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(operand2, length2, j) && mx_check_q_in_number(result, lengthr, k))
                                mx_help_print_decode(i, j, k, operation);
                        }
                        mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &k);
                    }  
                }
            }

        if(operation == '-')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= count2; j++) {
                    for (long k = 0; k <= countr; k++) {
                        mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &k);
                        if (i - j == k) {
                            if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(operand2, length2, j) && mx_check_q_in_number(result, lengthr, k))
                                mx_help_print_decode(i, j, k, operation);
                        }
                        mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &k);
                    }   
                }
            }

        if(operation == '*')
            for (long i = 0; i <= count1; i++) {
                for (long j = 0; j <= count2; j++) {
                    for (long k = 0; k <= countr; k++) {
                        mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &k);
                        if (i * j == k) {
                            if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(operand2, length2, j) && mx_check_q_in_number(result, lengthr, k))
                                mx_help_print_decode(i, j, k, operation);
                        }
                        mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &k);
                    }   
                }
            }

        if(operation == '/')
            for (long i =  0; i <= count1; i++) {
                for (long j = 0; j <= count2; j++) {
                    for (long k = 0; k <= countr; k++) {
                        mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &k);
                        if (j != 0 && i / j == k) {
                            if (mx_check_q_in_number(operand1, length1, i) && mx_check_q_in_number(operand2, length2, j) && mx_check_q_in_number(result, lengthr, k))
                                mx_help_print_decode(i, j, k, operation);
                        }
                        mx_mult_minus_one(delete_minus1, delete_minus2, delete_minus3, &i, &j, &k);
                    }  
                }
            }
        return;
    }

}
