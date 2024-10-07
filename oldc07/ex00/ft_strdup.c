/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:19:58 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/18 11:20:29 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <sys/errno.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	copy = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	if (!copy)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    // Test cases
    char *original = "Hello, world!";
    //char *empty_str = "";
    //char *special_chars = "123!@#";

    // Duplicate the strings using ft_strdup
    char *dup = ft_strdup(original);

	//Display
	printf("Original: %s\n", original);
	printf("Duplication: %s\n", dup);

    // Check if the duplicates are correct
    if (dup && strcmp(dup, original) == 0)
        printf("Test 1 passed: '%s'\n", dup);
    else
        printf("Test 1 failed!\n");

    // Free the duplicated strings
    free(dup);
    return 0;
}*/
