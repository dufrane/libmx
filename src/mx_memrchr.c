#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    char *p;

    if (s) {
        p = (char *) s + mx_strlen(s);
        for (size_t i = n; i > 0; i--, p--) {
            if ((((unsigned char*)s)[i]) == (unsigned char)c)
            return (char *)p;    
        }
    }
    return NULL;
}

