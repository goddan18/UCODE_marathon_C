int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    if (a == 0 && b == 0) return 0;
    if (a < 0) a *= -1;
    if (b < 0) b *= -1;
    return a * b / mx_gcd(a, b);
}

