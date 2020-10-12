#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    int size = 0;

    if (arr == NULL || delim == NULL) 
        return;
    while (arr[size] != NULL ) {
        size++;
    }
    for (int i = 0; i < size; i++) {
        if (i < size-1) {
            mx_printstr(arr[i]);
            mx_printstr(delim);
        }
        else 
            mx_printstr(arr[i]);
    }
    mx_printchar('\n');
}
