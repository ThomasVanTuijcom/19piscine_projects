/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:32:09 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/17 15:26:23 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	base_contains(char c, char *base)
{
	int	contains;
	int	i;

	contains = 0;
	i = 0;
	while (base[i] && !contains)
	{
		if (base[i] == c)
			contains = 1;
		i++;
	}
	return (contains);
}

int	find_index_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

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
