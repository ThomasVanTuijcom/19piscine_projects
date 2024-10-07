/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:36:41 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/19 14:09:28 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = (int *) malloc(length * sizeof(int));
	if (!result)
		return (NULL);
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	doublethevalue(int i)
{
	return i*i;
}
int main()
{
	int *values = (int *) malloc(10 * sizeof(int));
	for(int i = 0; i < 10; i++)
	{
		values[i] = i;
	}
	int *test = ft_map(values, 10, doublethevalue);
	for(int j =0; j<10; j++)
	{
		printf("%d ", test[j]);
	}
	return 0;
}*/
