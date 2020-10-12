#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    if (mx_strlen(needle) == 0)
    return (char *) haystack;
    while(*haystack) {
        if (*haystack == *needle) {
            if (mx_strncmp(haystack, needle, mx_strlen(needle)) == 0) 
                return (char *) haystack;
        }   
        haystack++;
    }
return 0;
}
