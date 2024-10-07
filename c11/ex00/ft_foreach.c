/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:25:12 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/19 13:35:45 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		digit = (nb % 10) + '0';
		write(1, &digit, 1);
	}
}
int main()
{
	int *tab = malloc(12 * sizeof(int));
	for(int i = 0; i < 12; i++)
	{
		tab[i] = i * 10;
	}
	ft_foreach(tab, 12, ft_putnbr);
	return 0;
}*/
