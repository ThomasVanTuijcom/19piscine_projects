/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:53:08 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 16:05:42 by tvan-tui         ###   ########.fr       */
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

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	while (begin_list2)
	{
		ft_sorted_list_insert(begin_list1, begin_list2->data, cmp);
		begin_list2 = begin_list2->next;
	}
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
void print_list(t_list *list) {
    while (list) {
        printf("%d -> ", *(int *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}

// Comparison function for integers
int cmp_int(void *a, void *b) {
    return (*(int *)a - *(int *)b);
}
int main(void) {
    // List 1 (already sorted)
    int values1[] = {1, 3, 5, 7};
    t_list *list1 = NULL;

    // Create the first list by inserting elements in sorted order
    for (int i = 0; i < 4; i++) {
        ft_sorted_list_insert(&list1, &values1[i], cmp_int);
    }

    // List 2 (already sorted)
    int values2[] = {2, 4, 6, 8};
    t_list *list2 = NULL;

    // Create the second list by inserting elements in sorted order
    for (int i = 0; i < 4; i++) {
        ft_sorted_list_insert(&list2, &values2[i], cmp_int);
    }

    // Print both lists before merging
    printf("List 1 before merge:\n");
    print_list(list1);

    printf("List 2 before merge:\n");
    print_list(list2);

    // Merge list2 into list1
    ft_sorted_list_merge(&list1, list2, cmp_int);

    // Print the merged list
    printf("List 1 after merge:\n");
    print_list(list1);

    return 0;
}*/
