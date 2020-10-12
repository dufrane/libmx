#include "libmx.h"

char *mx_itoa(int number) {
    char *arr = NULL;
    long int tmp = number;
    int length = 1;
    int i = 0;
    
    for (; number / 10; length++)
        number /= 10;
    if (tmp > 0)
        (arr = mx_strnew(length)); 
    else 
        arr = mx_strnew(length + 1);
    if (tmp < 0)
        (i = 1, arr[0] = '-', tmp *= -1);
    else
        length--;
    for (; length >= 0 + i; tmp /= 10)
        arr[length--] = tmp % 10 + 48;
    return arr;
}
