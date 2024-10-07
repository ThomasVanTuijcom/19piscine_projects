/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:32:54 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/17 08:42:21 by tvan-tui         ###   ########.fr       */
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
/*
#include <stdio.h>
int main()
{
	printf("sqrt(2147395600): %d\n", ft_sqrt(2147395600));
	printf("sqrt(284664384): %d\n", ft_sqrt(284664384));
	printf("sqrt(42107121): %d\n", ft_sqrt(42107121));
	printf("sqrt(15366400): %d\n", ft_sqrt(15366400));
	printf("sqrt(25938649): %d\n", ft_sqrt(25938649));
	printf("sqrt(6922161): %d\n", ft_sqrt(6922161));
	return 0;
}*/
