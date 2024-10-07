/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:21:14 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/09 11:33:32 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation: '%s'\n", dest);

    ft_strcat(dest, src);

    printf("After concatenation: '%s'\n", dest);

    return 0;
}*/
