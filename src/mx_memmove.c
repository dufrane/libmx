#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {

    char *temp = mx_strnew((const int) len);
    temp = mx_memcpy((void *restrict) temp, (const void *restrict) src, len);
    dst = mx_memcpy((void *restrict) dst, (const void *restrict) temp, len);
    free(temp);
return (char *) dst;
}

