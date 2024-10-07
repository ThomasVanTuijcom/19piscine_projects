/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:32:00 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/22 10:31:02 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	base_contains(char c, char *base);
int	find_index_char(char c, char *base);
int	ft_recursive_power(int nb, int power);
int	check_invalid_arg(char *base);

int	convert_to_dec(char *str, int start, int end, char *base)
{
	int	result;
	int	index;
	int	power;
	int	length;

	result = 0;
	length = end - start + 1;
	while (start <= end)
	{
		index = find_index_char(str[start], base);
		power = ft_recursive_power(ft_strlen(base), length - 1);
		result += index * power;
		length--;
		start++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	start;
	int	end;

	i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	if (base_contains(str[i], base))
		start = i;
	while (str[i] && base_contains(str[i], base))
		i++;
	end = i - 1;
	return (convert_to_dec(str, start, end, base) * sign);
}

void	ft_putnbr_base(char *str, int i, int nbr, char *base)
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
		if (nbr < 0)
		{
			str[0] = '-';
			nbr = -nbr;
		}
		if (nbr >= size)
		{
			ft_putnbr_base(str, i - 1, nbr / size, base);
		}
		digit = base[(nbr % size)];
		str[i] = digit;
	}
}

char	*min_int(char *base_to)
{
	char	*result;
	int		base_length;
	int		size;
	long	min;

	base_length = ft_strlen(base_to);
	size = 1;
	min = 2147483648;
	while (min / base_length > 0)
	{
		min /= base_length;
		size++;
	}
	result = (char *) malloc((size + 1) * sizeof(char));
	result[0] = '-';
	result[1] = min % base_length;
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_int;
	int		base_size;
	int		ctr;
	int		cpy;
	char	*result;

	nbr_int = ft_atoi_base(nbr, base_from);
	base_size = ft_strlen(base_to);
	cpy = nbr_int;
	ctr = 0;
	if (check_invalid_arg(base_from) || check_invalid_arg(base_to))
		return (NULL);
	while (cpy / base_size != 0)
	{
		ctr++;
		cpy /= base_size;
	}
	result = (char *) malloc(33 * sizeof(char));
	if (nbr_int == -2147483648)
		return (min_int(base_to));
	else if (nbr_int < 0)
		ft_putnbr_base(result, ctr + 1, nbr_int, base_to);
	else
		ft_putnbr_base(result, ctr, nbr_int, base_to);
	return (result);
}
/*
#include <stdio.h>
int main()
{
	char *nbr = "--44";
	char *base_from = "012";
	char *base_to = "01245";

	printf("--44: %d\n", ft_atoi_base("--44", "012"));
	return 0;
}*/
