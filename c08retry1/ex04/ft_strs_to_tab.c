/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:49:00 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/24 10:46:01 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	copy = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	if (!copy)
	{
		return (NULL);
	}
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	transform_struct(t_stock_str *tab, int ac, char **av)
{
	int		i;
	int		j;
	int		length;
	char	*cpy;

	i = 0;
	j = 0;
	while (i < ac)
	{
		length = ft_strlen(av[i]);
		cpy = ft_strdup(av[i]);
		tab[i].str = av[i];
		tab[i].size = length;
		tab[i].copy = cpy;
		i++;
	}
	tab[i].str = 0;
	tab[i].size = 0;
	tab[i].copy = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;

	result = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (!result)
		return (NULL);
	transform_struct(result, ac, av);
	return (result);
}
/*
#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
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
	while (par[i].str)
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

int main(int argc, char *argv[])
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return 0;
}*/
