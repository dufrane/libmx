#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    char *p = (char *)s;
    size_t i = 0; 

    if (s) {
        for ( ; i <= n; i++, p++) {
            if ((((unsigned char*)s)[i]) == (unsigned char)c)      
                return p;
        }
    }
    return 0;
}

