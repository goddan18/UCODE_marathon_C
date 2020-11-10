int mx_factorial_rec(int n) {
    if (n == 1) return 1;
    if (n <= 0 || n > 12) return 0;
    return n * mx_factorial_iter(n - 1);
}

