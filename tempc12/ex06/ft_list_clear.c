/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:15:24 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/24 17:24:18 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*last;

	last = begin_list;
	while (last->next)
		last = last->next;
	while (begin_list != last)
	{
		free_fct(last->data);
		if (last->next)
			free_fct(last->next);
	}
	free_fct(last->data);
	free_fct(last->next);
}
