/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:31:58 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/08 14:09:59 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	value;
	int	i;

	value = 1;
	i = 0;
	while (value == 1 && str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			value = 0;
		i++;
	}
	if (i == 0)
		return (1);
	else
		return (value);
}
