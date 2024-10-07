/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apierret <apierret@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:08:20 by apierret          #+#    #+#             */
/*   Updated: 2024/09/15 16:28:46 by apierret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush01.h"

void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	**ft_split(char *str, char sep);
int		ft_atoi(char *str);
int		ft_str_is_numeric(char *str);
void	ft_free_array(void *grid);
void	ft_free_matrix(void **matrix);
int		**ft_malloc_matrix(int size);
void	ft_print_grid(t_grid grid);
int		ft_solve_skyscrapers(t_grid grid,
			int *indexes, int row, int col);

int	validate_arguments(int argc, char *argv[], int size)
{
	if (argc != 2 || ft_strlen(argv[1]) != size * 4 + size * 4 - 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int	fill_indexes(char **indexes_str, int *indexes, int size)
{
	int	i;

	i = 0;
	while (indexes_str[i] != 0)
	{
		if (!ft_str_is_numeric(indexes_str[i]))
			return (0);
		indexes[i] = ft_atoi(indexes_str[i]);
		if (indexes[i] < 1 || indexes[i] > size)
			return (0);
		i++;
	}
	if (i != size * 4)
		return (0);
	return (1);
}

int	*parse_indexes(char *arg, int size)
{
	char	**indexes_str;
	int		*indexes;

	indexes_str = ft_split(arg, ' ');
	if (!indexes_str)
	{
		ft_putstr("Error\n");
		return (0);
	}
	indexes = (int *)malloc(sizeof(int) * size * 4);
	if (!indexes || !fill_indexes(indexes_str, indexes, size))
	{
		ft_free_matrix((void **) indexes_str);
		if (indexes)
			free(indexes);
		ft_putstr("Error\n");
		return (0);
	}
	ft_free_matrix((void **) indexes_str);
	return (indexes);
}

int	main(int argc, char *argv[])
{
	t_grid	grid;
	int		*indexes;

	grid.size = 4;
	if (!validate_arguments(argc, argv, grid.size))
		return (0);
	indexes = parse_indexes(argv[1], grid.size);
	if (!indexes)
		return (0);
	grid.grid = ft_malloc_matrix(grid.size);
	if (ft_solve_skyscrapers(grid, indexes, 0, 0))
		ft_print_grid(grid);
	else
		ft_putstr("Error\n");
	ft_free_matrix((void **) grid.grid);
	free(indexes);
	return (0);
}
