#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2){
    int len = mx_strlen(s1);
    for(int i = len, j = 0; i < len + mx_strlen(s2); i++, j++){
        s1[i]=s2[j];
    }
    s1[len + mx_strlen(s2)] = '\0';
    return s1;
}
