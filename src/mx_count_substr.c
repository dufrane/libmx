#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    if (!str || !sub)
        return -1;
    for (int i = 0; *str; i++) {
        if (mx_strncmp(str, sub, mx_strlen(sub)) == 0) {
            count++;
        }
        str++;
    }
    return count;
}
