/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apierret <apierret@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:14:46 by apierret          #+#    #+#             */
/*   Updated: 2024/09/15 12:16:27 by apierret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_array(void *grid)
{
	if (grid != 0)
		free(grid);
}

void	ft_free_matrix(void **matrix)
{
	int	i;

	if (matrix == 0)
		return ;
	i = 0;
	while (matrix[i] != 0)
	{
		ft_free_array(matrix[i]);
		i++;
	}
	free(matrix);
}

int	**ft_malloc_matrix(int size)
{
	int	**matrix;
	int	i;
	int	j;

	matrix = (int **) malloc(sizeof(int *) * size +1);
	if (matrix == 0)
		return (0);
	matrix[size] = 0;
	i = 0;
	while (i < size)
	{
		matrix[i] = (int *) malloc(sizeof(int) * size);
		if (matrix[i] == 0)
		{
			ft_free_matrix((void **) matrix);
			return (0);
		}
		j = 0;
		while (j < size)
			matrix[i][j++] = 0;
		i++;
	}
	return (matrix);
}

int	*ft_malloc_array(int size)
{
	int	*array;

	array = (int *) malloc(sizeof(int) * size);
	if (array == 0)
	{
		ft_free_array((void *) array);
		return (0);
	}
	return (array);
}
