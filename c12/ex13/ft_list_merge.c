/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:45:54 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 15:46:18 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*curr;

	curr = begin_list;
	if (!curr->next)
		return (curr);
	while (curr->next)
		curr = curr->next;
	return (curr);
}

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*last;
	t_list	*curr;

	last = ft_list_last(*begin_list1);
	curr = begin_list2;
	while (curr)
	{
		last->next = curr;
		last = curr;
		curr = curr->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    // Create the first list with some strings
    t_list *list1 = ft_create_elem(strdup("First"));
    list1->next = ft_create_elem(strdup("Second"));
    list1->next->next = ft_create_elem(strdup("Third"));

    printf("List 1 before merging:\n");
    print_list(list1);

    // Create the second list with some strings
    t_list *list2 = ft_create_elem(strdup("Fourth"));
    list2->next = ft_create_elem(strdup("Fifth"));
    list2->next->next = ft_create_elem(strdup("Sixth"));

    printf("List 2 before merging:\n");
    print_list(list2);

    // Merge list2 into list1
    ft_list_merge(&list1, list2);

    printf("\nList 1 after merging:\n");
    print_list(list1);

    // Free the merged list (list1 now contains both lists' data)
    t_list *temp;
    while (list1 != NULL)
    {
        temp = list1;
        list1 = list1->next;
        free(temp->data);
        free(temp);
    }

    return 0;
}*/
