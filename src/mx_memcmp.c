#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    int i = 0;
    
    if (mx_strlen(s1) == (int) n && mx_strlen(s2) == (int) n) {
        while(((unsigned char*)s1)[i] == ((unsigned char*)s2)[i]) {
            if (((unsigned char*)s1)[i] == '\0' && ((unsigned char*)s1)[i] == '\0')
                return 0;
                i++;
        }
    }
    return ((unsigned char*)s1)[i] - ((unsigned char*)s2)[i];
}
