/*
** EPITECH PROJECT, 2018
** null
** File description:
** null
*/

#include "garbage.h"

void free_tab(char **tab)
{
	if (!tab)
		return;
	for (int i = 0; tab[i]; i++)
		free(tab[i]);
	free(tab);
}