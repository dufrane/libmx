#include "libmx.h"

void mx_pop_front(t_list **head) {
    t_list *top_list = NULL;

    if (*head) {  
        if ((*head)->next == NULL) {
            free(*head);
            *head = NULL;
        }
        else {
            top_list = (*head)->next;
            free(*head);
            *head = top_list;
        }
    }
}
