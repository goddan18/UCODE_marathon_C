char* mx_strcpy(char* dst, const char* src) {
    int count = 0;
    while(*src) {
        *dst++ = *src++;
        count++;
    }
    for(int i = 0; i < count; i++) {
        dst--;
        src--;
    }
    return src;
}

