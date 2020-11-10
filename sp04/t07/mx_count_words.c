int mx_count_words(const char *str, char delimiter) {
    int state = 0;  
    int wc = 0; 
    while (*str)  {  

        if (*str == delimiter || *str == '\n')  
            state = 0;  

        else if (state == 0)  {  
            state = 1;  
            ++wc;  
        }  
        ++str;  
    }  
  
    return wc;
}

