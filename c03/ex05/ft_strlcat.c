/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:21:14 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/10 09:47:37 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		return (size + j);
	j = 0;
	while (src[j])
	{
		if (k < size - i - 1)
		{
			dest[i + k] = src[j];
			k++;
		}
		j++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    // Test case 1: Normal concatenation within size limits
    char dest1[20] = "Hello, ";
    char src1[] = "world!";
    unsigned int size1 = 20;
    unsigned int result1 = ft_strlcat(dest1, src1, size1);
	printf("Test 1 - Concatenation within size limits:\n");
    printf("Result: '%s'\n", dest1);
    printf("Return value (total length): %u\n", result1);
	char dest1bis[20] = "Hello, ";
	result1 = strlcat(dest1bis, src1, size1);
	printf("Test 1 BIS- Concatenation within size limits:\n");
    printf("Result: '%s'\n", dest1bis);
    printf("Return value (total length): %u\n", result1);
    printf("\n");

    // Test case 2: Size is smaller than the length of dest
    char dest2[10] = "Hello, ";
    char src2[] = "world!";

    unsigned int size2 = 8; // size smaller than dest
	unsigned int result2 = ft_strlcat(dest2, src2, size2);
	
	printf("Test 2 - Size smaller than dest length:\n");
    printf("Result: '%s'\n", dest2);
    printf("Return value (total length): %u\n", result2);
    
	char dest2bis[10] = "Hello, ";
	
	result2 = strlcat(dest2bis, src2, size2);
	printf("Test 2 BIS - Size smaller than dest length:\n");
    printf("Result: '%s'\n", dest2bis);
    printf("Return value (total length): %u\n", result2);
	printf("\n");

    // Test case 3: Size larger than both dest and src
    char dest3[30] = "Hello, ";
    char src3[] = "world!";
    unsigned int size3 = 30; // size large enough to hold both
    unsigned int result3 = ft_strlcat(dest3, src3, size3);
	printf("Test 3 - Size larger than dest and src combined:\n");
    printf("Result: '%s'\n", dest3);
    printf("Return value (total length): %u\n", result3);
    char dest3bis[30] = "Hello, ";
	result3 = strlcat(dest3bis, src3, size3);
	printf("Test 3 BIS - Size larger than dest and src combined:\n");
    printf("Result: '%s'\n", dest3bis);
    printf("Return value (total length): %u\n", result3);
	printf("\n");

    // Test case 4: Size is 0 (nothing should be concatenated)
    char dest4[10] = "Hello";
    char src4[] = "world!";
    unsigned int size4 = 0; // size = 0
    unsigned int result4 = ft_strlcat(dest4, src4, size4);
	printf("Test 4 - Size is 0:\n");
    printf("Result: '%s'\n", dest4);
    printf("Return value (total length): %u\n", result4);
    char dest4bis[10] = "Hello";
	result4 = strlcat(dest4bis, src4, size4);
	printf("Test 4 BIS - Size is 0:\n");
    printf("Result: '%s'\n", dest4bis);
    printf("Return value (total length): %u\n", result4);
	printf("\n");

    // Test case 5: Size too small to concatenate anything but part of dest
    char dest5[10] = "Hello";
    char src5[] = "world!";
    unsigned int size5 = 8; // size too small for full concatenation
    unsigned int result5 = ft_strlcat(dest5, src5, size5);
	printf("Test 5 - Size too small for full concatenation:\n");
    printf("Result: '%s'\n", dest5);
    printf("Return value (total length): %u\n", result5);
    char dest5bis[10] = "Hello";
	result5 = strlcat(dest5bis, src5, size5);
	printf("Test 5 BIS - Size too small for full concatenation:\n");
    printf("Result: '%s'\n", dest5);
    printf("Return value (total length): %u\n", result5);
	printf("\n");

    return 0;
}*/
