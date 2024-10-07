/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:29:45 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/08 14:04:06 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	value;
	int	i;

	value = 1;
	i = 0;
	while (value == 1 && str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			value = 0;
		i++;
	}
	if (i == 0)
		return (1);
	else
		return (value);
}
