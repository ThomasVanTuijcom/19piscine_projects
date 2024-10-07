/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:40:07 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/19 08:52:34 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		found;

	i = 0;
	found = 1;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
			else
				i = i + j;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    // Test case 1: Substring is found in the string
    char str1[] = "Hello, world!";
    char to_find1[] = "world";
    char *result1 = ft_strstr(str1, to_find1);
	char *result1bis = strstr(str1, to_find1);
    if (result1 != NULL)
        printf("Test 1 - Substring found: '%s'\n", result1);
    else
        printf("Test 1 - Substring not found.\n");
	if (result1bis != NULL)
        printf("Test 1 GOOD - Substring found: '%s'\n", result1bis);
    else
        printf("Test 1 GOOD - Substring not found.\n");

    // Test case 2: Substring is not found in the string
    char str2[] = "Hello, world!";
    char to_find2[] = "planet";
    char *result2 = ft_strstr(str2, to_find2);
    if (result2 != NULL)
        printf("Test 2 - Substring found: '%s'\n", result2);
    else
        printf("Test 2 - Substring not found.\n");

    // Test case 3: Substring is empty
    char str3[] = "Hello, world!";
    char to_find3[] = "";
    char *result3 = ft_strstr(str3, to_find3);
    printf("Test 3 - Empty should return original string: '%s'\n", result3);

    // Test case 4: Both string and substring are empty
    char str4[] = "";
    char to_find4[] = "";
    char *result4 = ft_strstr(str4, to_find4);
    printf("Test 4 - Both empty should return original string: '%s'\n", result4);

    return 0;
}*/
