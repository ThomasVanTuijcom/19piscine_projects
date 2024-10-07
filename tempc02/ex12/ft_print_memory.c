/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:43:45 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/07 17:10:10 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	write(1, &&addr, 200);

	return (addr);
}

int main()
{
	
	return 0;
}
