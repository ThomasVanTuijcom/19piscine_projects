/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:20:15 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/11 16:21:56 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_invalid_arg(char *base)
{
	int		i;
	int		j;
	int		invalid_arg;

	i = 0;
	invalid_arg = 0;
	while (base[i] && !invalid_arg)
	{
		if (base[i] == 43 || base[i] == 45)
			invalid_arg = 1;
		j = i + 1;
		while (base[j] && !invalid_arg)
		{
			if (base[i] == base[j])
				invalid_arg = 1;
			j++;
		}
		i++;
	}
	if (i < 2)
		invalid_arg = 1;
	return (invalid_arg);
}

void	write_int_min(int size)
{
	if (size == 10)
		write(1, "-2147483648", 11);
	else if (size == 2)
		write(1, "-10000000000000000000000000000000", 33);
	else if (size == 8)
		write(1, "-20000000000",12);
	else
		write(1, "-80000000", 9);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	digit;
	int		invalid_arg;
	int		size;

	size = 0;
	invalid_arg = check_invalid_arg(base);
	while (base[size])
		size++;
	if (!invalid_arg)
	{
		if (nbr == -2147483648)
			write_int_min(size);
		else
		{
			if (nbr < 0)
			{
				write(1, "-", 1);
				nbr = -nbr;
			}
			if (nbr >= size)
			{
				ft_putnbr_base(nbr / size, base);
			}
			if (size == 16)
				digit = base[(nbr % size)];
			else
				digit = (nbr % size) + 48;
			write(1, &digit, 1);
		}
	}
}
#include <stdio.h>
int main()
{
	ft_putnbr_base(42, "0123456789");
	printf("\n");
	ft_putnbr_base(42, "01");
	printf("\n");
	ft_putnbr_base(42, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(42, "poneyvif");
	printf("\n");
	ft_putnbr_base(-42, "0123456789");
	printf("\n");
	ft_putnbr_base(-42, "01");
	printf("\n");
	ft_putnbr_base(-42, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(-42, "poneyvif");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "01");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(-2147483648, "poneyvif");
	printf("\n");
	return 0;
}
