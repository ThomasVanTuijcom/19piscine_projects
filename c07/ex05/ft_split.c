/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:35:42 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/20 12:37:49 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_charset_complete(char *str, char *charset, int start)
{
	int	i;
	int	j;

	i = start;
	j = 0;
	while (j < ft_strlen(charset))
	{
		if (str[i] != charset[j])
			return (-1);
		i++;
		j++;
	}
	return (i);
}

char	*ft_strndup(char *str, int start, int end)
{
	char	*result;
	int		i;

	result = (char *) malloc((end - start + 1) * sizeof(char));
	i = 0;
	while (start < end)
	{
		result[i] = str[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

void	fill_result(char **result, char *str, char *charset)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = 0;
	start = 0;
	while (str[i])
	{
		end = check_charset_complete(str, charset, i);
		if (end != -1)
		{
			result[j] = ft_strndup(str, start, i);
			j++;
			i = end;
			start = end;
		}
		else
			i++;
	}
	result[j] = ft_strndup(str, start, i);
	result[++j] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		wc;

	i = 0;
	wc = 1;
	while (str[i])
	{
		if (check_charset_complete(str, charset, i) > -1)
			wc++;
		i++;
	}
	result = (char **) malloc((wc + 1) * sizeof(char *));
	fill_result(result, str, charset);
	return (result);
}

#include <stdio.h>
int main()
{
	int	i = 0;
	char **res = ft_split("Bonjour les gens", " ");
	while(res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	printf("res[2] : %s\n", res[2]);
	printf("res[3] : %s\n", res[3]);
	return 0;
}
