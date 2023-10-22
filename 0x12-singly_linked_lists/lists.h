#ifndef _list_H_
#define _list_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t print_list(const list_t *h);

/**
 * struct list_s - singly linked list
 * @str: string (malloced string)
 * len: length of the string
 * @next: pointer to the next node
 */

typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;
