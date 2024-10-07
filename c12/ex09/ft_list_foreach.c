/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:04:52 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 15:42:15 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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

void print_data(void *data)
{
    printf("%d\n", *(int *)data);
}

int	main(void)
{
	int a = 10;
    int b = 20;
    int c = 30;

    // Create a simple linked list: [10] -> [20] -> [30]
    t_list *node1 = ft_create_elem(&a);
    t_list *node2 = ft_create_elem(&b);
    t_list *node3 = ft_create_elem(&c);

    node1->next = node2;
    node2->next = node3;

    // Apply the print_data function to each element in the list
    ft_list_foreach(node1, print_data);

    // Free the list after usage (good practice)
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
