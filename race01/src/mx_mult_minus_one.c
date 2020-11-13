#include "minilibmx.h"

void mx_mult_minus_one(bool delete_minus1, bool delete_minus2, bool delete_minus3, long *num1, long *num2, long *numr) {
    if (delete_minus1) *num1 *= -1;
    if (delete_minus2) *num2 *= -1;;
    if (delete_minus3) *numr *= -1;
}
