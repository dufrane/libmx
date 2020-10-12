#include "libmx.h"

void mx_str_reverse(char *s) {
    int mid;

    if (s == NULL)
        return;
    mid = mx_strlen(s)/2;
    for(int i=0; i<mid; i++){
        mx_swap_char(&s[i], &s[mx_strlen(s)-1-i]);
    }
}
