#include "libmx.h"

int mx_length (const char *arr);

unsigned long mx_hex_to_nbr(const char *hex) {
    int length = mx_length(hex);
    unsigned long nbr = 0;
    unsigned long pow = 1;

    if (hex != NULL){
        for (int i = length-1; hex[i] != '\0'; i--) {
            if (hex[i] >= 65 && hex[i] <= 70) {
                nbr = nbr + (hex[i] - 55) * pow; 
            }
            if (hex[i] >= 48 && hex[i] <= 57) {
                nbr = nbr + (hex[i] - 48) * pow;
            }
            if (hex[i] >= 97 && hex[i] <= 102) {
                nbr = nbr + (hex[i] - 87) * pow;
            }
            pow *= 16;
        }
    }
    return nbr;
}

int mx_length (const char *arr){
    int length = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        length++;
    }
    return length;
}
