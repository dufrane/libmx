#include "libmx.h"

void mx_pop_back(t_list **head) {
    t_list *temp = *head;
    
    if (*head) {
        if ((*head)->next == NULL) {
            free(*head);
            *head = NULL;
        }
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

