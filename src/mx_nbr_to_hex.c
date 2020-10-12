#include "libmx.h"

static int num_len(unsigned long num);

char *mx_nbr_to_hex(unsigned long nbr) {
    char *hex = NULL;
    unsigned long clone = nbr;
    int length = num_len(nbr);
    int temp;

    hex = malloc(length);
    if (nbr == 0)
        return mx_strcpy(hex, "0");
    while (clone) {
        temp = clone % 16;
        if (temp < 10)
            hex[--length] = 48 + temp;
        if (temp >= 10)
            hex[--length] = 87 + temp;
        clone /= 16;
    }
    return hex;
}

static int num_len(unsigned long num) {
    int length = 0;

    while (num) {
        num /= 16;
        length++;
    }
    return length;
}
