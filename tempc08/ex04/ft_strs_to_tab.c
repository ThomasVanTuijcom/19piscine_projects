/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:49:00 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/18 15:51:55 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while(par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	int			length;
	char		*cpy;
	t_stock_str	*result;

	result = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if(!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ac)
	{
		length = ft_strlen(av[i]);
		cpy = (char *) malloc(length * sizeof(char));
		while(j < length && av[i][j])
		{
			cpy[j] = av[i][j];
			j++;
		}
		result[i].str = av[i];
		result[i].size = length;
		result[i].copy = cpy;
		i++;
	}
	result[i].str = "\0";
	result[i].size = 0;
	result[i].copy = "\0";
	return (result);
}
int main(int argc, char *argv[])
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return 0;
}
