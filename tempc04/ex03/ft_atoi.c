/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:48:57 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/10 16:17:37 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

int	power(int val, int pow)
{
	int	i;
	int	number;

	i = 0;
	number = val;
	while (i < pow - 1)
	{
		number = number * val;
		i++;
	}
	return (number);
}

int	calc_number(char *str, int start, int end)
{
	int	number;
	int	val;

	number = 0;
	while (start <= end)
	{
		val = str[start] - 48;
		if (end - start > 0)
			number = number + (power(10, (end - start)) * val);
		else
			number = number + val;
		start++;
	}
	return (number);
}

int	extract_abs_nbr(char *str)
{
	int	i;
	int	start;
	int	keepgoing;

	i = 0;
	start = -1;
	keepgoing = 1;
	while (str[i] && keepgoing)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (start == -1)
				start = i;
		}
		else if (start != -1 && (str[i] < '0' || str[i] > '9'))
		{
			keepgoing = !keepgoing;
		}
		i++;
	}
	return (calc_number(str, start, i - 2));
}

int	respect_rules(char c, int white_space)
{
	int	is_space;

	is_space = (c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r' || c == ' ');
	if (!(c == 43 || c == 45) && !is_space)
		return (0);
	if (is_space && !white_space)
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	count;
	int	keepgoing;
	int	white_space;
	int	minus_count;
	int	number;

	count = 0;
	keepgoing = 1;
	white_space = 1;
	minus_count = 0;
	number = extract_abs_nbr(str);
	while (str[count] && (str[count] < 48 || str[count] > 57) && keepgoing)
	{
		keepgoing = respect_rules(str[count], white_space);
		if (str[count] == 43 || str[count] == 45)
		{
			white_space = 0;
			if (str[count] == 45)
				minus_count++;
		}
		count++;
	}
	if (minus_count % 2 > 0)
		return (number - (2 * number));
	return (number);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number = ft_atoi(" -- --+--+1234ab567");
	printf("My atoi: %d\n", number);
	return 0;
}*/
