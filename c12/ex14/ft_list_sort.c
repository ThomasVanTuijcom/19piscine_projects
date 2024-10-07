/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:58:30 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 16:02:19 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

int	compare(t_list **previous, t_list **i, int (*cmp)(), t_list **begin_list)
{
	int		swapped;
	t_list	*tmp;

	swapped = 0;
	if (cmp((*i)->data, (*i)->next->data) > 0)
	{
		tmp = (*i)->next;
		(*i)->next = tmp->next;
		tmp->next = *i;
		if (*previous == NULL)
			*begin_list = tmp;
		else
			(*previous)->next = tmp;
		swapped = 1;
		*previous = tmp;
	}
	else
	{
		*previous = *i;
		*i = (*i)->next;
	}
	return (swapped);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*i;
	t_list	*previous;
	int		swapped;

	if (*begin_list == NULL)
		return ;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = *begin_list;
		previous = NULL;
		while (i && i->next)
		{
			swapped = compare(&previous, &i, cmp, begin_list);
		}
	}
}
/*
#include <string.h>
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
void print_list(t_list *list)
{
    while (list != NULL)
    {
        printf("%s -> ", (char *)list->data);
        list = list->next;
    }
    printf("NULL\n");
}
int cmp(void *data1, void *data2)
{
    return strcmp((char *)data1, (char *)data2);
}
int main()
{
    // Create a list with some unsorted strings
    t_list *list = ft_create_elem(strdup("Banana"));
    list->next = ft_create_elem(strdup("Apple"));
    list->next->next = ft_create_elem(strdup("Grape"));
    list->next->next->next = ft_create_elem(strdup("Orange"));
    list->next->next->next->next = ft_create_elem(strdup("Cherry"));

    printf("List before sorting:\n");
    print_list(list);

    // Sort the list using ft_list_sort
    ft_list_sort(&list, cmp);

    printf("\nList after sorting:\n");
    print_list(list);

    // Free the sorted list
    t_list *temp;
    while (list != NULL)
    {
        temp = list;
        list = list->next;
        free(temp->data);
        free(temp);
    }

    return 0;
}*/
