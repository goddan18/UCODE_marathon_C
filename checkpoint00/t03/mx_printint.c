#include "unistd.h"

void mx_printint(int n) {
	if (n == -2147483648) {
		write(1, "-2147483648", 11);
		return 0;
	}
	int count = 0;
	int n_copy = n;
	int div_count = 1;
	int res;
	char a = '-';

	if (n < 0) {

		write(1, &a, 1);
		n *= -1;
		n_copy *= -1;
	}

	do {
		n_copy /= 10;
		count++;
	} while(n_copy > 0);	

	for(int i = 0; i < count - 1; i++) {
		div_count *= 10;
	}

	do {
		res = n / div_count + 48;
       		write(1, &res, 1);
		n %= div_count;
		div_count /= 10;
		
	} while(n > 0);	
}


