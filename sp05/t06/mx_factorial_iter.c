int mx_factorial_iter(int n) {
    if (n <= 0 || n > 12) return 0;
    int res = 1;
    for (int i = n; i > 1; i --)
        res *= i;
    return res;
}


