/*
** EPITECH PROJECT, 2018
** null
** File description:
** null
*/

#include "garbage.h"

void garbage_free(garbage_t *list)
{
	garbage_t* tmp = NULL;

	while (list) {
		tmp = list->next;
		list->fptr(list->balise);
		free(list);
		list = tmp;
	}
}
