/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:47:11 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 15:38:24 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*head;
	t_list	*curr;
	t_list	*node;
	int		i;

	head = ft_create_elem(strs[size - 1]);
	curr = head;
	i = 1;
	while (i < size)
	{
		node = ft_create_elem(strs[size - 1 - i]);
		curr->next = node;
		curr = node;
		i++;
	}
	return (head);
}
/*
#include <stdio.h>
#include <stdlib.h>
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

int	main(void)
{
	char *strs[] = {"One", "Two", "Three", "Four", "Five"};
	int size = 5;

	// Create the list using ft_list_push_strs
	t_list *list = ft_list_push_strs(size, strs);

	// Print the list to verify the order of elements
	print_list(list); 

	return 0;
}*/
