/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:49:31 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/09 10:44:35 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "az";
    char str2[] = "azaa";
    unsigned int n = 4;  // Number of characters to compare
	
	printf("Test: %c\n", *str1);
    int result = ft_strncmp(str1, str2, n);
	int result2 = strncmp(str1, str2, n);
	printf("Result 1: \n");
	printf("my strcmp: %d\n", result);
	printf("Result 2: \n");
	printf("real strcmp: %d\n", result2);
    return 0;
}*/
