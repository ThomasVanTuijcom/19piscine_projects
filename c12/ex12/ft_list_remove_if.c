/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:34:36 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 15:45:41 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*previous;
	t_list	*curr;
	t_list	*tmp;

	curr = *begin_list;
	previous = NULL;
	while (curr)
	{
		if (cmp(curr->data, data_ref) == 0)
		{
			if (previous == NULL)
				*begin_list = curr->next;
			else
				previous->next = curr->next;
			tmp = curr;
			curr = curr->next;
			free_fct(tmp->data);
			free(tmp);
		}
		else
		{
			previous = curr;
			curr = curr->next;
		}
	}
}
/*
#include <string.h>
#include <stdio.h>
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
int cmp(void *data1, void *data2)
{
    return strcmp((char *)data1, (char *)data2);
}

// Free function
void free_fct(void *data)
{
    free(data);
}

// Function to print the list
void print_list(t_list *list)
{
    while (list != NULL)
    {
        printf("%s -> ", (char *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

// Main function to test the ft_list_remove_if function
int main()
{
    // Create a list with some strings
    t_list *list = ft_create_elem(strdup("Hello"));
    list->next = ft_create_elem(strdup("World"));
    list->next->next = ft_create_elem(strdup("Test"));
    list->next->next->next = ft_create_elem(strdup("World"));
    list->next->next->next->next = ft_create_elem(strdup("42"));

    printf("Original list:\n");
    print_list(list);

    // Remove all elements that match "World"
    char *data_ref = "World";
    ft_list_remove_if(&list, data_ref, cmp, free_fct);

    printf("\nList after removing '%s':\n", data_ref);
    print_list(list);

    // Free remaining elements
    while (list != NULL)
    {
        t_list *temp = list;
        list = list->next;
        free_fct(temp->data);
        free(temp);
    }

    return 0;
}*/
