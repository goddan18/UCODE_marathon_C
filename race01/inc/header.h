#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <malloc.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
bool mx_isdigit(char c);
bool mx_isspace(char c);
long long mx_atoi(const char* str);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str); 
void mx_printerr(const char *s);
double mx_pow(double n, unsigned int pow);
char *mx_itoa(long long number);

void check_args(char *argv[], char *operand1, char *operation, char *operand2, char *result, 
                    int operand1_length, int opertion_length, int operand2_length, int result_length);
void print_equation(char *operand1, char *operation, char *operand2, char *result,
                        int operand1_length, int operand2_length, int result_length);

#endif
