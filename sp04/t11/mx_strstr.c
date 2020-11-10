char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);

char *strstr(const char *s1, const char *s2) {
    int len_str1 = mx_strlen(s1);
       int len_str2 = mx_strlen(s2);
       char *save_str=NULL;
       int i=0;
       for(; i<len_str1; i++)
       {
there:
           if(s1[i]==s2[0]) {
               save_str=(char*)s1[i];  
               int j=0;                  
               for(;i<len_str1;i++) {
                   if(j<len_str2) {
                       if(s1[i]!=s2[j]) {
                           goto there;
                       }
                       j++;
                   }
                   else {
                       return save_str;    
                   }
               }
           }

       }
}

