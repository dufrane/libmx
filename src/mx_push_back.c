#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *bottom = mx_create_node(data);
    t_list *buff = *list;

    if (*list == NULL || list == NULL) {
        *list = bottom;
        return;
    }
    while (buff->next != NULL) {
        buff = buff->next;
    }
    buff->next = bottom;
}


