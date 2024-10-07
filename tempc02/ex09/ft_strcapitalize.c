/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:48:44 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/06 12:05:10 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	condition1;
	bool	condition2;

	i = 0;
	while (str[i] != '\0')
	{
		condition1 = (i - 1 < 0 || (str[i - 1] >= 32 && str[i - 1] <= 47));
		condition2 = (str[i] >= 97 && str[i] <= 122);
		if (condition1 && condition2)
			str[i] = str[i] - 32;
		i++;
	}
	return (&str);
}
