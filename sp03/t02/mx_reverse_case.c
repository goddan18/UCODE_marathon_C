bool mx_islower(int c);

bool mx_isupper(int c);

int mx_tolower(int c);

int mx_toupper(int c);

void mx_reverse_case(char*s) {
    int ind = 0;
    while (s[ind] != '\0') {
        if (mx_islower(s[ind])) s[ind] = mx_toupper(s[ind]);
        else if (mx_isupper(s[ind])) s[ind] = mx_tolower(s[ind]);
        if(s[ind] != '\0') ind++;
    }
}
