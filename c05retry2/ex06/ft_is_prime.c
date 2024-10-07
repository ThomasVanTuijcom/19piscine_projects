/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:06:17 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/19 08:40:41 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	min;
	int	mid;
	int	max;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	min = 2;
	max = nb / 2;
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid < nb && mid < 46341)
			min = mid + 1;
		else
			max = mid - 1;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	is_prime;
	int	cpy;

	is_prime = 1;
	cpy = nb;
	if (nb < 2)
		return (0);
	if (nb < 4)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (ft_sqrt(cpy) == 0)
		cpy++;
	while (i <= ft_sqrt(cpy) && is_prime)
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
	printf("is 50621 prime number: %d\n", ft_is_prime(50621));
	return 0;
}*/
