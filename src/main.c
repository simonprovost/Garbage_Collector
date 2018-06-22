/*
** EPITECH PROJECT, 2018
** null
** File description:
** null
*/

#include "garbage.h"

void my_func(garbage_t *garbage_list, char **av)
{
	char *test = strdup(av[1]);
	char *test_2 = strdup(av[2]);
	char *test_3 = strdup(av[3]);
	char *test_4 = strdup(av[4]);
	char **test_5 = malloc(sizeof(char *) * 2);
	test_5[0] = strdup(av[1]);
	test_5[1] = NULL;

	garbage_add_pointer(test, &free_string, garbage_list);
	garbage_add_pointer(test_2, &free_string, garbage_list);
	garbage_add_pointer(test_3, &free_string, garbage_list);
	garbage_add_pointer(test_4, &free_string, garbage_list);
	garbage_add_pointer(test_5, &free_tab, garbage_list);
}

int main(__attribute__((unused))int ac, char **av)
{
	garbage_t *garbage_list = init_garbage_list();

	my_func(garbage_list, av);
	garbage_free(garbage_list);
	return (0);
}