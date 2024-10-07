/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:15:24 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/26 15:39:19 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*curr;
	t_list	*next;

	curr = begin_list;
	while (curr)
	{
		free_fct(curr->data);
		next = curr->next;
		free(curr);
		curr = next;
	}
}
