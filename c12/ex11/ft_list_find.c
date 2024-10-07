/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:22:37 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/25 16:28:51 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (cmp(begin_list->data, data_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <stdlib.h>

// The structure and cmp_int function are already defined in ft_list_find

// Comparison function to compare two integers
int cmp_int(void *data, void *data_ref)
{
    return (*(int *)data - *(int *)data_ref);
}

// Helper function to create a new list element
t_list *ft_create_elem(void *data)
{
    t_list *new_elem = (t_list *)malloc(sizeof(t_list));
    if (!new_elem)
        return NULL;
    new_elem->data = data;
    new_elem->next = NULL;
    return new_elem;
}

// Function to add a new element at the end of the list
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
    int data_ref = 3;                   // We want to find this value

    // Creating the list with the integers in the values array
    for (int i = 0; i < 6; i++)
    {
        ft_list_push_back(&list, &values[i]);
    }

    // Try to find the element that matches data_ref (3)
    t_list *found_elem = ft_list_find(list, &data_ref, cmp_int);

    if (found_elem)
    {
        printf("Found element: %d\n", *(int *)(found_elem->data));
    }
    else
    {
        printf("Element not found.\n");
    }

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
