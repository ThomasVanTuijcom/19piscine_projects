/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:13:24 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/19 15:05:19 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	is_there_a_a(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}
int main()
{
	char str1[] = "test1";
	char str2[] = "test2";
	char str3[] = "test3";

	char **result = (char **) malloc(3 * sizeof(char *));
	result[0] = str1;
	result[1] = str2;
	result[2] = str3;

	int res = ft_any(result, is_there_a_a);
	printf("res : %d\n", res);
	return 0;
}*/
