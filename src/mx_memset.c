#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *f = (unsigned char*) b;
    
    for (size_t i = 0; i < len; i++) {
        f[i] = (unsigned char )c;
    }
    return f;
}

