/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:59:09 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 16:04:14 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*curr;
	t_list	*new;

	new = ft_create_elem(data);
	if (*begin_list == NULL || cmp((*begin_list)->data, data) > 0)
	{
		new->next = *begin_list;
		*begin_list = new;
		return ;
	}
	curr = *begin_list;
	while (curr->next && cmp(curr->next->data, data) < 0)
	{
		curr = curr->next;
	}
	new->next = curr->next;
	curr->next = new;
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
// Comparison function for integers
int cmp_int(void *a, void *b) {
    return (*(int *)a - *(int *)b); // Return difference for sorting
}

// Function to print the linked list
void print_list(t_list *list) {
    while (list) {
        printf("%d -> ", *(int *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}
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

int main(void) {
    t_list *sorted_list = NULL;

    // Insert elements into the sorted list
    int values[] = {1, 2, 2, 2, 3, 4, 4};
    for (int i = 0; i < 7; i++) {
        ft_sorted_list_insert(&sorted_list, &values[i], cmp_int);
    }
    print_list(sorted_list);

    // Insert a new value
    int new_value = 3;
    ft_sorted_list_insert(&sorted_list, &new_value, cmp_int);
    print_list(sorted_list);

    return 0;
}*/
