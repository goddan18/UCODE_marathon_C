#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>
#include <errno.h>
#include <string.h>

typedef struct  s_agent {
    char *name;
    int power;
    int strength;
}               t_agent;

int mx_strlen(const char *s);
void mx_printerr(const char*s);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
bool mx_isspace(char c);
char *mx_strnew(const int size);
int mx_strcmp (const char *s1, const char *s2);
void mx_strdel(char **str);
char* mx_strncpy(char *dst, const char *src, int len);
int mx_count_words(const char *str, char delimiter);
char **mx_strsplit(char const *s, char c);
bool mx_isdigit(char c);
long mx_atoi(const char* str);
void mx_print_agents(t_agent **agents, int count_of_agents);


