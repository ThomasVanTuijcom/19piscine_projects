/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:46:05 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 15:39:51 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int	i;

	i = 0;
	if (!begin_list)
		return (NULL);
	while (nbr > 0)
	{
		if (!begin_list->next)
			return (NULL);
		begin_list = begin_list->next;
		nbr--;
	}
	return (begin_list);
}
/*
#include <stdio.h>
#include <stdlib.h>
t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list *head;
	t_list *curr;
	t_list *node;
	int		i;

	head = ft_create_elem(strs[size - 1]);
	curr = head;
	i = 1;
	while(i < size)
	{
		node = ft_create_elem(strs[size - 1 - i]);
		curr->next = node;
		curr = node;
		i++;
	}
	return (head);
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

int	main(void)
{
	char *strs[] = {"One", "Two", "Three", "Four", "Five"};
	int size = 5;

	// Create the list using ft_list_push_strs
	t_list *list = ft_list_push_strs(size, strs);

	// Print the list to verify the order of elements
	print_list(list);

	// Get the 3rd elem
	t_list *res = ft_list_at(list, 4);
	if(!res)
		printf("res: NULL");
	else
		printf("res: %s\n", res->data);

	return 0;
}*/
