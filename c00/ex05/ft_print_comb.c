/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:15:47 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/05 16:34:33 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numbers[3];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (numbers[0] <= '7')
	{
		write(1, &numbers, 3);
		if (numbers[0] != '7')
			write(1, ", ", 2);
		if (numbers[2] == '9')
		{
			if (numbers[1] == '8')
			{
				numbers[0]++;
				numbers[1] = numbers[0] + 1;
			}
			else
				numbers[1]++;
			numbers[2] = numbers[1] + 1;
		}
		else
			numbers[2]++;
	}
}
