void mx_printchar(char c);

void mx_printint(int n) {
	int count = 0;
	int n_copy = n;
	int div_count = 1;

	if (n < 0) {
		mx_printchar('-');
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
		mx_printchar(n / div_count + 48);
		n %= div_count;
		div_count /= 10;
		
	} while(n > 0);	
	mx_printchar('\n');
}
