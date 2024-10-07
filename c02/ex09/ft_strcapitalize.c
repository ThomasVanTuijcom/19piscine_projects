/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:48:44 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/09 10:06:04 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	is_specialchar;
	bool	is_lowercase;
	bool	is_uppercase;

	i = 0;
	while (str[i] != '\0')
	{
		is_specialchar = (i - 1 < 0 || (str[i - 1] >= 32 && str[i - 1] <= 47));
		is_lowercase = (str[i] >= 97 && str[i] <= 122);
		is_uppercase = (str[i] >= 65 && str[i] <= 90);
		if (is_specialchar && is_lowercase)
			str[i] = str[i] - 32;
		else if (!is_specialchar && is_uppercase)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
    // Test cases
	char test_str1[] = "salut, comment tu vas ? 42mots quar-deux; cinq+et+un";
	char test_str2[] = "hello world! this is 42TEST CASE";
	char test_str3[] = "   leading spaces and CAPS LOCK! ";
	char test_str4[] = "ALLUPPERCASE TEST";
	char test_str5[] = "numbers123 mixedCASE";

    // Apply the ft_strcapitalize function to each test case
	printf("Original: %s\n", test_str1);
	ft_strcapitalize(test_str1);
	printf("Capitalized: %s\n\n", test_str1);

	printf("Original: %s\n", test_str2);
	ft_strcapitalize(test_str2);
	printf("Capitalized: %s\n\n", test_str2);

	printf("Original: %s\n", test_str3);
	ft_strcapitalize(test_str3);
	printf("Capitalized: %s\n\n", test_str3);

	printf("Original: %s\n", test_str4);
	ft_strcapitalize(test_str4);
	printf("Capitalized: %s\n\n", test_str4);

	printf("Original: %s\n", test_str5);
	ft_strcapitalize(test_str5);
	printf("Capitalized: %s\n", test_str5);

    return 0;
}*/
