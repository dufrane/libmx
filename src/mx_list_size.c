#include "libmx.h"

int mx_list_size(t_list *list) {
    int counter = 0;
    t_list *temp = NULL;

    if (list) {
        temp = list;
        while (temp != NULL) {
            counter++;
            temp = temp->next;
        }
    }
    return counter;
}
