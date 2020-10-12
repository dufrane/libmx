#include "libmx.h"

void mx_del_strarr(char ***arr) {
    char **tmp = *arr;
    
    for (int i = 0; tmp[i] != NULL; i++) 
        mx_strdel(&tmp[i]);
    free(*arr);
    *arr = NULL;  
}
