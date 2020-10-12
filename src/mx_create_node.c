#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *node = NULL;

    if (!data)
        return NULL;
    else {
        node = (t_list *)malloc(sizeof(t_list));
        node->data = data;
        node->next = NULL;
        return node;
    }
}
