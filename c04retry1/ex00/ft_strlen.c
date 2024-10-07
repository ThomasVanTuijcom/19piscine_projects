/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:56:01 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/10 10:03:39 by tvan-tui         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "Bonjour";
	int length = ft_strlen(s);
	int length2 = strlen(s);
	printf("length of s: %d\n", length);
	printf("length2 of s: %d\n", length2);
	return 0;
}*/
