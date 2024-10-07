/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:50:06 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/17 08:42:52 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power - 1 > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("145 pow 0: %d", ft_iterative_power(145,0));
	return 0;
}*/
