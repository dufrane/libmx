#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {  
    int i = 0;
    int length = size - 1;

    if (!*arr)
        return -1;
    else {
        while (i <= length) {  
            ++*count; 
            int m = (length + i) / 2;
            if (mx_strcmp(arr[m], s) == 0) {
                return m; 
            } 
            else if (mx_strcmp(arr[m], s) <= 0) {
                i = m + 1;  
            }
            else
                length = m - 1; 
        } 
    *count = 0;
    return -1; 
    }
}
