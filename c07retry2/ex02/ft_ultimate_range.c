/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:12:11 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/18 11:21:46 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *) malloc(size * sizeof(int));
	i = 0;
	if (!array)
		return (-1);
	while (i < size)
	{
		array[i] = min++;
		i++;
	}
	*range = array;
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
    int *range;  // Pointer to hold the range of integers
    int size;    // Variable to hold the size of the range

    // Test case 1: Range from 1 to 5
    size = ft_ultimate_range(&range, 1, 5);
    if (size > 0)
    {
        printf("Range 1 to 5 (Size: %d): ", size);
        for (int i = 0; i < size; i++)
            printf("%d ", range[i]);
        printf("\n");
        free(range);  // Free the allocated memory
    }
    else if (size == 0)
    {
        printf("Test 1: No range (min >= max)\n");
    }
    else
    {
        printf("Test 1: Memory allocation failed\n");
    }

    // Test case 2: Range from -3 to 3
    size = ft_ultimate_range(&range, -3, 3);
    if (size > 0)
    {
        printf("Range -3 to 3 (Size: %d): ", size);
        for (int i = 0; i < size; i++)
            printf("%d ", range[i]);
        printf("\n");
        free(range);
    }
    else if (size == 0)
    {
        printf("Test 2: No range (min >= max)\n");
    }
    else
    {
        printf("Test 2: Memory allocation failed\n");
    }

    // Test case 3: Invalid range (min >= max)
    size = ft_ultimate_range(&range, 5, 5);
    if (size == 0 && range == NULL)
        printf("Test 3 passed: returned 0 and range is NULL\n");
    else
        printf("Test 3 failed!\n");

    // Test case 4: Range from 10 to 15
    size = ft_ultimate_range(&range, 10, 15);
    if (size > 0)
    {
        printf("Range 10 to 15 (Size: %d): ", size);
        for (int i = 0; i < size; i++)
            printf("%d ", range[i]);
        printf("\n");
        free(range);
    }
    else if (size == 0)
    {
        printf("Test 4: No range (min >= max)\n");
    }
    else
    {
        printf("Test 4: Memory allocation failed\n");
    }

    return 0;
}*/
