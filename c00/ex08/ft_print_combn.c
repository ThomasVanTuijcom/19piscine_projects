/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:40:41 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/05 16:59:35 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_to_zero(char array[], int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		array[i] = '0';
		i++;
	}
	array[n - 1] = '1';
}

void	print_char(char characters[], int len)
{
	write(1, characters, len);
	if (characters[0] != (10 - len) + '0')
		write(1, ", ", 1);
}

void	ft_print_combn(int n)
{
	char	numbers[9];
	int		i;
	int		j;

	init_to_zero(numbers, n);
	while (numbers[0] != ((10 - (n -1)) + '0'))
	{
		print_char(numbers, n);
		numbers[n - 1]++;
		i = n - 1;
		while (i > 0)
		{
			if (numbers[i] > '9' - (n - 1 - i))
			{
				numbers[i - 1]++;
				j = i;
				while (j < n)
				{
					numbers[j] = numbers[j - 1] + 1;
					j++;
				}
			}
			i--;
		}
	}
}
