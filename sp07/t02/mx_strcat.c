char *mx_strcat(char *s1, const char *s2) {
    int count = 0;
    while(*s1) {
	    count++;
	    s1++;
	}
	while(*s2) {
	    count++;
		*s1++ = *s2++;
	}
	*s1 = '\0';
	return s1 - count;
}

