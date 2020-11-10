#include <time.h>

double mx_timer(void (*f)()) {
    clock_t start, stop;
    start = clock();
    f();
    stop = clock();
    return (start == (clock_t)(-1) || stop == (clock_t)(-1)) ? -1 : (double)(stop - start) / 1000000;
}


