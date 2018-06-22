/*
** EPITECH PROJECT, 2018
** null
** File description:
** null
*/

#include "garbage.h"

int first_node(void *pointer, void (*fptr), garbage_t *list)
{
	static int loop = 0;

	if (loop == 0) {
		list->balise = pointer;
		list->fptr = fptr;
		list->next = NULL;
		loop++;
		return (1);
	} else
		return (0);
}

void garbage_add_pointer(void *pointer, void (*fptr), garbage_t *list)
{
	garbage_t *tmp = list;

	if (!pointer || !fptr || !list || first_node(pointer, fptr, list) != 0)
		return;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = malloc(sizeof(*tmp));
	tmp->next->balise = pointer;
	tmp->next->fptr = fptr;
	tmp->next->next = NULL;
}

garbage_t *init_garbage_list(void)
{
	garbage_t *garbage_list = malloc(sizeof(*garbage_list));

	garbage_list->balise = NULL;
	garbage_list->fptr = NULL;
	garbage_list->next = NULL;
	return(garbage_list);
}