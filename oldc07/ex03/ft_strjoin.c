/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:44:08 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/18 11:26:04 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		length;

	length = 0;
	i = 0;
	if (size <= 0)
	{
		result = malloc(0 * sizeof(char));
		return (result);
	}
	while (i < size)
		length += ft_strlen(strs[i++]);
	length += i;
	result = (char *) malloc(length * sizeof(char));
	i = 0;
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
			result = ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	char *strs[] = {"Bonjour", "les", "gens"};
	char *res = ft_strjoin(3, strs, "SPACE");
	printf("res: %s\n", res);
	free(res);
	return (0);
}*/
