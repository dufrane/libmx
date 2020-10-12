#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int file_o = open(file, O_RDONLY);
    int count = 0;
    char temp;
    char *str;
    
    if (file_o > 0) {
        while ((read(file_o, &temp, 1)))
            count++;
        close (file_o);
        if (count > 0) {
            file_o = open(file, O_RDONLY);
            str = mx_strnew(count);
            for (int i = 0; read(file_o, &temp, 1); i++)
                str[i] = temp;
                close(file_o);
                return str;
        }
    }
    return NULL;
}



