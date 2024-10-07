/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:20:15 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/11 10:29:35 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_invalid_arg(char *base)
{
	int		i;
	int		j;
	int 	invalid_arg;

	i = 0;
	invalid_arg = 0;
	while(base[i] && !invalid_arg)
	{
		if (base[i] == 43 || base[i] == 45)
			invalid_arg = 1;
		j = i + 1;
		while(base[j] && !invalid_arg)
		{
			if(base[i] == base[j])
				invalid_arg = 1;
			j++;
		}
		i++;
	}
	if(i < 2)
		invalid_arg = 1;
	return (invalid_arg);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	digit;
	int		invalid_arg;
	int		size;

	size = 0;
	invalid_arg = check_invalid_arg(base);
	while(base[size])
	{
		size++;
	}
	if (!invalid_arg)
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
		//if (size == 16)
			digit = base[(nbr % size)];
		//else
			//digit = (nbr % size) + 55;
		write(1, &digit, 1);
	}
}
int main()
{
	ft_putnbr_base(42, "0123456789");
	return 0;
}
