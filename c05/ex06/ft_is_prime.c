/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:06:17 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/17 08:53:15 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	is_prime;

	i = 2;
	is_prime = 1;
	if (nb < 2)
		return (0);
	if (i % 2 > 0)
		i = 3;
	while (i < nb / 2 && is_prime)
	{
		if (nb % i == 0)
			is_prime = 0;
		i += 2;
	}
	return (is_prime);
}
/*
#include <stdio.h>
int main()
{
	printf("is 3 prime number: %d\n", ft_is_prime(3));
	printf("is 7 prime number: %d\n", ft_is_prime(7));
	printf("is 6 prime number: %d\n", ft_is_prime(6));
	printf("is 47 prime number: %d\n", ft_is_prime(47));
	printf("is 46 prime number: %d\n", ft_is_prime(46));
	printf("is -3485 prime number: %d\n", ft_is_prime(-3485));
	printf("is -12 prime number: %d\n", ft_is_prime(-12));
	printf("is 0 prime number: %d\n", ft_is_prime(0));
	printf("is 1 prime number: %d\n", ft_is_prime(1));
	printf("is 2 prime number: %d\n", ft_is_prime(2));
	return 0;
}*/
