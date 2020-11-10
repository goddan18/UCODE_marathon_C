#pragma once

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <locale.h>

struct colms {
	wchar_t *arr;
	int length, start, finish;
};

wchar_t get_random_num();
void get_term_size(WINDOW *mainwin,int *rows, int *cols);
int matrix(WINDOW *mainwin);
void print_massege(WINDOW *mainwin, int cols, int rows);

