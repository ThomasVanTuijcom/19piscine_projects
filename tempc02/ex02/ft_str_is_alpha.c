/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:14:12 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/06 11:25:25 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	value;
	int	i;

	value = 1;
	i = 0;
	while (value == 1 && str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122 || (str[i] > 90 && str[i] < 97))
			value = 0;
		i++;
	}
	return (value);
}
