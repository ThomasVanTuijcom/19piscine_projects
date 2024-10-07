/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apierret <apierret@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 22:57:33 by apierret          #+#    #+#             */
/*   Updated: 2024/09/15 15:42:52 by apierret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_isspace(char c);
int	ft_count_strings(char *str, char sep);
int	ft_str_is_numeric(char *str);

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		i;

	if (src == 0)
		return (0);
	dest = (char *) malloc(sizeof(char) * (n + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char sep)
{
	char	**strings;
	int		i;
	int		start;
	int		strings_count;
	int		str_index;

	strings_count = ft_count_strings(str, sep);
	strings = (char **)malloc(sizeof(char *) * (strings_count + 1));
	i = 0;
	str_index = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sep)
		{
			start = i;
			while (str[i] && str[i] != sep)
				i++;
			strings[str_index++] = ft_strndup(&str[start], i - start);
		}
		else
			i++;
	}
	strings[str_index] = 0;
	return (strings);
}

int	ft_atoi(char *str)
{
	int	value;
	int	i;

	value = 0;
	i = 0;
	while (str[i] != '\0')
	{
		value *= 10;
		value += str[i] - 48;
		i++;
	}
	return (value);
}
