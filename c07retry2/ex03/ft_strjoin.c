/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:44:08 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/22 10:41:21 by tvan-tui         ###   ########.fr       */
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
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	concatenate_strings(char *result, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
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
		result = malloc(1 * sizeof(char));
		result[0] = '\0';
		return (result);
	}
	while (i < size)
		length += ft_strlen(strs[i++]);
	length += --i * ft_strlen(sep);
	result = (char *) malloc((length + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	concatenate_strings(result, strs, sep, size);
	return (result);
}
/*
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int	i = 0;
	while(i < ft_strlen(str))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char *strs[] = {"Bonjour", "les", "gens"};
	char *res = ft_strjoin(3, strs, "SPACE");
	ft_putstr(res);
	free(res);
	return (0);
}*/
