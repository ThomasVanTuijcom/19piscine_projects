/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apierret <apierret@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:10:50 by apierret          #+#    #+#             */
/*   Updated: 2024/09/15 16:24:23 by apierret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_get_next_cell(t_grid grid, int row, int col, int *next_cell);
int		ft_count_skyscrapers_v(t_grid grid, int down_to_up, int pos);
int		ft_count_skyscrapers_h(t_grid grid, int right_to_left, int pos);

int	ft_can_place_at(t_grid grid, int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < grid.size)
	{
		if (grid.grid[row][i] == value || grid.grid[i][col] == value)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_count_skyscrapers(t_grid grid, int direction, int pos)
{
	int	count;

	if (direction < 2)
		count = ft_count_skyscrapers_v(grid, direction, pos);
	else
		count = ft_count_skyscrapers_h(grid, direction -2, pos);
	return (count);
}

int	ft_indexes_are_valid(t_grid grid, int *indexes)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < grid.size)
		{
			if (ft_count_skyscrapers(grid, i, j) != indexes[i * grid.size + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_solve_skyscrapers(t_grid grid, int *indexes, int row, int col)
{
	int	next_cell[2];
	int	value;

	value = 1;
	if (row == grid.size)
		return (ft_indexes_are_valid(grid, indexes));
	ft_get_next_cell(grid, row, col, next_cell);
	while (value <= grid.size)
	{
		if (ft_can_place_at(grid, row, col, value))
		{
			grid.grid[row][col] = value;
			if (ft_solve_skyscrapers(grid, indexes, next_cell[0], next_cell[1]))
				return (1);
			grid.grid[row][col] = 0;
		}
		value++;
	}
	return (0);
}
