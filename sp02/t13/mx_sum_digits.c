int mx_sum_digits(int num) {
	int sum = 0;

	if (num < 0)
		num *= -1;
	do {
		sum += num % 10;
		num /= 10;
	} while(num > 0);
	return sum;
}
