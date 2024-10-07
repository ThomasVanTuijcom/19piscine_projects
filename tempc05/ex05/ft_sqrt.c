/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:32:54 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/11 18:06:05 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int number;

	number = 2;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);

	while (number <= nb / 2)
	{
		if (number * number == nb)
			return (number);
		number++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("sqrt(2): %d\n", ft_sqrt(2));
	printf("sqrt(4): %d\n", ft_sqrt(4));
	printf("sqrt(6): %d\n", ft_sqrt(6));
	printf("sqrt(144): %d\n", ft_sqrt(144));
	return 0;
}*/
