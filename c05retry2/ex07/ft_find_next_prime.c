/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:14:13 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/19 08:44:36 by tvan-tui         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 3)
		nb = 2;
	if (nb % 2 > 0)
		i = 3;
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("next of 4: %d\n", ft_find_next_prime(4));
	printf("next of 7: %d\n", ft_find_next_prime(7));
	printf("next of 0: %d\n", ft_find_next_prime(0));
	printf("next of 1: %d\n", ft_find_next_prime(1));
	printf("next of 331802: %d\n", ft_find_next_prime(331802));
	printf("next of 370839: %d\n", ft_find_next_prime(370839));
	printf("next of 192779: %d\n", ft_find_next_prime(1192779));
	printf("next of 2147483646: %d\n", ft_find_next_prime(2147483646));
	return 0;
}*/
