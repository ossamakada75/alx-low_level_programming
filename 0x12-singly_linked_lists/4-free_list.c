#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head) {
    while (head != NULL) {
        list_t *temp = head;
        head = head->next;
        free(temp->str);
        free(temp);
    }
}

