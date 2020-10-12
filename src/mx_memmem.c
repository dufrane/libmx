#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    const char *p = (const char *)big; 
    const char *p2 = (const char *)little; 

    if (big_len > 0 && big_len > little_len && little_len > 0) {
        for ( ; *p; p++) {  
            if (!mx_strncmp(p, p2, (int)little_len))
                return (char *) p;
        }
    }
    return 0;
}

