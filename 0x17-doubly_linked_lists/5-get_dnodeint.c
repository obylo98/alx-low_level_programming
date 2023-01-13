#include "lists.h"

/**
 * get_dnodeint_at_index - Nth node
 *
 * @head: pointer to head node
 *
 * @index: int
 *
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
    unsigned int i;
    dlistint_t *current;

    current = head;
    for (i = 0; current && i < index; i++) {
        current = current->next;
    }
    return current;
}
