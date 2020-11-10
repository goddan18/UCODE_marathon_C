#pragma once

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

long mx_pow(long n, unsigned int pow);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
char* mx_strcpy(char* dst, const char* src);
int mx_strcmp (const char *s1, const char *s2);
bool mx_isdigit(char c);
bool mx_isspace(char c);
long mx_atoi(const char* str);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str); 
void mx_printerr(const char *s);
bool mx_check_argv(char *str);
void mx_help_print_decode(int i, int j, int k, char operation);
void mx_print_decode(bool is_q1, bool is_q2, bool is_qr, char *operand1, char operation, char *operand2, char *result, bool delete_minus1, bool delete_minus2, bool delete_minus3);
void mx_decode(char *operand1, char operation, char *operand2, char *result, bool delete_minus1, bool delete_minus2, bool delete_minus3);
bool mx_check_q_in_number(char *num_char, int size, int num);
long mx_pow(long n, unsigned int pow);
void mx_mult_minus_one(bool delete_minus1, bool delete_minus2, bool delete_minus3, long *num1, long *num2, long *numr);

