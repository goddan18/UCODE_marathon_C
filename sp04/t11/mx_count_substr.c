char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    int M = mx_strlen(sub);
    int N = mx_strlen(str);
    int res = 0;
   
    for (int i = 0; i <= N - M; i++)
    { 
        int j;
        for (j = 0; j < M; j++)
            if (str[i+j] != sub[j])
                break;
  
        if (j == M)  
        {
           res++;
           j = 0;
        }
    }
    return res;
}

