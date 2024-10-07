/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:14:13 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/12 10:33:23 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	   nb = 2;
	while (i < nb)
	{
		if(nb % i == 0)
		{
			i = 2;
			nb++;
		}
		i++;
	}
	return (nb);
}
#include <stdio.h>
int main()
{
	printf("next of 4: %d\n", ft_find_next_prime(4));
	printf("next of 7: %d\n", ft_find_next_prime(7));
	printf("next of 0: %d\n", ft_find_next_prime(0));
	printf("next of 1: %d\n", ft_find_next_prime(1));
	printf("next of 60: %d\n", ft_find_next_prime(60));
	return 0;
}
