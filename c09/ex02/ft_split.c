/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:20:53 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/24 13:29:06 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	char_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (!char_in_charset(str[i], charset) && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (char_in_charset(str[i], charset))
			in_word = 0;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str, int end)
{
	char	*result;
	int		i;

	if (!str)
		return (0);
	result = (char *) malloc(sizeof(char) * (end + 1));
	if (!result)
		return (0);
	i = 0;
	while (str[i] && i < end)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		wc;
	int		curr_str_index;
	int		start;

	i = 0;
	wc = count_words(str, charset);
	result = (char **) malloc(sizeof(char *) * (wc + 1));
	curr_str_index = 0;
	while (str[i])
	{
		if (!char_in_charset(str[i], charset))
		{
			start = i;
			while (str[i] && !char_in_charset(str[i], charset))
				i++;
			result[curr_str_index++] = ft_strdup(&str[start], i - start);
		}
		else
			i++;
	}
	result[curr_str_index] = 0;
	return (result);
}
/*
#include <stdio.h>
int main()
{
	int	i = 0;
	char **res = ft_split("Bonjour les gens", " .?");
	while(res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}

	return 0;
}*/
