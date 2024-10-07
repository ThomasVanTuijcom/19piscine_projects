/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:10:29 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/24 16:46:22 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*head;

	new = ft_create_elem(data);
	head = *begin_list;
	while (head->next)
	{
		head = head->next;
	}
	head->next = new;
}
/*
#include <stdio.h>
#include <stdlib.h>
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*curr;

	curr = ft_create_elem(data);
	if (curr)
	{
		curr->next = *begin_list;
		*begin_list = curr;
	}
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
void	print_list(t_list *list)
{
	while (list)
	{
		printf("%s -> ", (char *)list->data);
		list = list->next;
	}
	printf("NULL\n");
}
int main()
{
	t_list *list = NULL;

	// Add elements to the front of the list
	ft_list_push_front(&list, "World");
	ft_list_push_front(&list, "Hello");

	// Print the list to verify the order of elements
	print_list(list); // Expected Output: Hello -> World -> NULL

	// Add another element to the front
	ft_list_push_front(&list, "First");

	// Print again to verify
	print_list(list); // Expected Output: First -> Hello -> World -> NULL
	
	// Add another element to the end
	ft_list_push_back(&list, "Last one");
	ft_list_push_back(&list, "Last two");
	
	// Print again to verify
	print_list(list); // Expected Output: First -> Hello -> World -> NULL

	return 0;
}*/
