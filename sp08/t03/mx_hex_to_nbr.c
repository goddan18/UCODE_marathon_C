#include <stdio.h>
#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) { 
    if (hex == NULL) return 0;        
    unsigned long decimal = 0, i = 0, val, len = 0;                   
    const char *ptr = hex;
    while(*ptr++) len++;
    len--;  
    while(hex[i]!='\0') {  
        if(hex[i]>='0' && hex[i]<='9') {  
            val = hex[i] - 48;  
        }  
        else if(hex[i]>='a' && hex[i]<='f') {  
            val = hex[i] - 97 + 10;  
        }  
        else if(hex[i]>='A' && hex[i]<='F') {  
            val = hex[i] - 65 + 10;  
        } 
        else return 0;
        unsigned long c = 1; 
        for (unsigned long j = 0; j < len; j++) {
            c *= 16;
        }
        decimal += val * c;
        i++;
        len--;
    }
    return decimal;
}
