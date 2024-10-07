/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:46:07 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 15:43:33 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (cmp(begin_list->data, data_ref) == 0)
			f(begin_list->data);
		begin_list = begin_list->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_int(void *data)
{
    printf("%d\n", *(int *)data);
}

// Comparison function to compare two integers
int cmp_int(void *data, void *data_ref)
{
    return (*(int *)data - *(int *)data_ref);
}
t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list *) malloc(sizeof(t_list));
	if (elem)
	{
		elem->next = NULL;
		elem->data = data;
	}
	return (elem);
}
void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *new_elem = ft_create_elem(data);
    t_list *current = *begin_list;

    if (!current)
    {
        *begin_list = new_elem;
    }
    else
    {
        while (current->next)
            current = current->next;
        current->next = new_elem;
    }
}

int main()
{
    t_list *list = NULL;
    int values[] = {1, 2, 3, 4, 5, 2};  // List of integers
    int data_ref = 2;                   // We want to compare with this value

    // Creating the list with the integers in values array
    for (int i = 0; i < 6; i++)
    {
        ft_list_push_back(&list, &values[i]);
    }

    ft_list_foreach_if(list, print_int, &data_ref, cmp_int);

    // Free the list memory
    t_list *tmp;
    while (list)
    {
        tmp = list;
        list = list->next;
        free(tmp);
    }

    return 0;
}*/
