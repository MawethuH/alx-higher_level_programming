#include "lists.h"

/**
 * check_cycle - ...
 * @list: ...
 * Return: ...
 */

int check_cycle(listint_t *list)
{
	listint_t *str1 = NULL, *str2 = NULL;

	str1 = str2 = list;
	while (list && str1 && str2 && str1->next && str2->next)
	{
		str1 = str1->next;
		str2 = str2->next->next;
		if (!str2 || !str1)
			return (0);
		if (str2->next == str1)
			return (1);
	}
	return (0);
}
