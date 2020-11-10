void mx_str_reverse(char *s) {
	int length = 0;
	while (*s) {
		s++;
		length++;
	}
	s -= length;
   	char temp;
    for(int i = 0; i < length / 2; i++) {
    	   	temp = s[i];
  		s[i] = s[length - 1 - i];
    		s[length - 1 - i] = temp;
    }
}

