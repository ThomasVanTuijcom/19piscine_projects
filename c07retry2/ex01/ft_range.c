/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:53:49 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/18 11:21:02 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	range = (int *) malloc(size * sizeof(int));
	if (min >= max)
		return (NULL);
	while (i < size)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
int main()
{
	int max = -10;
	int min = -16;
	int *test = ft_range(min, max);
	int length = 0;

	while(length < (max - min))
	{
		printf("%d ", test[length]);
		length++;
	}
	printf("LENGTH: %d\n", length);
	printf("\n");
}*/
