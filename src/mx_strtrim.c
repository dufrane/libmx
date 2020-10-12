#include "libmx.h"

char *mx_strtrim(const char *str) {
    char *trimmed_str = NULL;
    int start_s_count = 0;
    int end_s_count = 0;
    int i = 0;
    int size = 0;

    if (str) {
    while (mx_isspace(str[i++]))
        start_s_count++;
    if (start_s_count == mx_strlen(str))
        return mx_strnew(0);
        i = mx_strlen(str) - 1;
    while (mx_isspace(str[i--]))
        end_s_count++;
        size = mx_strlen(str) - (start_s_count + end_s_count);
        str += start_s_count;
        trimmed_str = mx_strnew(size);
        mx_strncpy(trimmed_str, str, size);
    }
    return trimmed_str;
}
