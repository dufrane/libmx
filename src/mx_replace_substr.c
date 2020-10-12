#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    char *arr = NULL;
    
    if (str && sub && replace) {
    arr =  mx_strnew(mx_strlen(str) - mx_strlen(sub) + mx_strlen(replace));
    for (int i = 0; *str != '\0'; ) {
        if (mx_strncmp(str, sub, mx_strlen(sub)) == 0) {
            mx_strcat(arr, replace);
            i += mx_strlen(replace);
            str += mx_strlen(sub);
        }
        else 
        arr[i++] = *str++;
    }
    }
    return arr;
}

