/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01bis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkrakow <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:14:41 by fkrakow           #+#    #+#             */
/*   Updated: 2024/09/08 18:44:46 by fkrakow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	int	n;

	n = 0;
	while (n < x)
	{
		if (n == 0)
			ft_putchar('A');
		else if (n == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		n++;
	}
}

void	side_lines(int x, int y)
{
	int	n;
	int	l;

	l = 0;
	ft_putchar('\n');
	while (l < y - 2)
	{
		n = 0;
		while (n < x)
		{
			if (n == 0)
				ft_putchar('B');
			else if (n == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			n++;
		}
		ft_putchar('\n');
		l++;
	}
}

void	last_line(int x)
{
	int	n;

	n = 0;
	while (n < x)
	{
		if (n == 0)
			ft_putchar('C');
		else if (n == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		n++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_line(x);
		if (y > 1)
		{
			side_lines(x, y);
			last_line(x);
		}
	}
	else
		write(1, "Arguments must be strictly postive", 35);
}
