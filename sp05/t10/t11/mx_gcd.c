int mx_gcd(int a, int b) {
    if (b != 0)
        return mx_gcd(b, a % b);
    else {
        if (a >= 0)
            return a;
        return -a;
    }
}
