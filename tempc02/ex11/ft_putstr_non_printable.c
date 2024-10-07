/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:10:00 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/07 16:42:42 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			c = (str[i] / 16) + 48;
			write(1, "\\", 1);
			write(1, &c, 1);
			c = (str[i] % 16) - 10 + 97;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return 0;
}
*/
