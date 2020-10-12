#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    char *p = (char *) dst;

    for (size_t i = 0; i < n; i++) {
        ((char *) dst)[i] = ((char *)src)[i]; 
        p++;
            if (((unsigned char *)src)[i] == (unsigned char )c)
            return (unsigned char *)p;
    }
    return NULL;
}

