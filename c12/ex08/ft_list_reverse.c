/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:02:16 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 15:41:42 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

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

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list->next)
		return (begin_list);
	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

int	ft_list_size(t_list *begin_list)
{
	int	count;

	if (!begin_list)
		return (0);
	count = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

void	ft_list_reverse(t_list **begin_list)
{
	int		size;
	t_list	*curr;
	t_list	*previous;
	t_list	*new_head;

	size = ft_list_size(*begin_list);
	new_head = ft_list_last(*begin_list);
	while (size > 1)
	{
		curr = ft_list_at(*begin_list, size - 1);
		if (!curr)
			return ;
		previous = ft_list_at(*begin_list, size - 2);
		if (!previous)
			return ;
		curr->next = previous;
		size--;
	}
	curr = ft_list_at(*begin_list, size - 1);
	curr->next = NULL;
	*begin_list = new_head;
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
	ft_list_reverse(&list);

	print_list(list);

	return 0;
}*/
