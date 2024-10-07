/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:49:31 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/09 11:21:00 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "hello";
    char str2[] = "hellp";

	printf("Test: %c\n", *str1);
    int result = ft_strcmp(str1, str2);
	int result2 = strcmp(str1, str2);
	printf("Result 1: \n");
	printf("my strcmp: %d\n", result);
	printf("Result 2: \n");
	printf("real strcmp: %d\n", result2);
    return 0;
}*/
