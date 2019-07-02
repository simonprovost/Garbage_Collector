/*
** EPITECH PROJECT, 2018
** garbage
** File description:
** garbage
*/

#ifndef	__GARBAGE__
#define	__GARBAGE__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct garbage_s garbage_t;

typedef struct garbage_s {
	void *balise;
	void (*fptr)();
	struct garbage_s *next;
} gabage_t;

//GARBAGE

garbage_t *init_garbage_list(void);
void garbage_add_pointer(void *pointer,
void (*fptr), garbage_t *list);
void free_tab(char **tab);
void garbage_free(garbage_t *list);
void free_string(char *pointer);


#endif
