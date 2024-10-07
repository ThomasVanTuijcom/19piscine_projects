/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapers2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apierret <apierret@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:40:43 by apierret          #+#    #+#             */
/*   Updated: 2024/09/15 16:24:23 by apierret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_get_next_cell(t_grid grid, int row, int col, int *next_cell)
{
	if (col == grid.size -1)
	{
		next_cell[0] = row + 1;
		next_cell[1] = 0;
	}
	else
	{
		next_cell[0] = row;
		next_cell[1] = col + 1;
	}
}

int	ft_count_skyscrapers_v(t_grid grid, int down_to_up, int pos)
{
	int	count;
	int	max_height;
	int	i;

	count = 0;
	max_height = 0;
	if (down_to_up)
		i = grid.size -1;
	else
		i = 0;
	while ((!down_to_up && i < grid.size) || (down_to_up && i >= 0))
	{
		if (grid.grid[i][pos] > max_height)
		{
			max_height = grid.grid[i][pos];
			count++;
		}
		if (down_to_up)
			i--;
		else
			i++;
	}
	return (count);
}

int	ft_count_skyscrapers_h(t_grid grid, int right_to_left, int pos)
{
	int	count;
	int	max_height;
	int	i;

	count = 0;
	max_height = 0;
	if (right_to_left)
		i = grid.size -1;
	else
		i = 0;
	while ((!right_to_left && i < grid.size) || (right_to_left && i >= 0))
	{
		if (grid.grid[pos][i] > max_height)
		{
			max_height = grid.grid[pos][i];
			count++;
		}
		if (right_to_left)
			i--;
		else
			i++;
	}
	return (count);
}
