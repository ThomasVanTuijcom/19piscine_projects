/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:31:28 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/24 12:42:56 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 0;
	desc = 0;
	if (length < 3)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0 && !asc && !desc)
			desc = 1;
		else if (f(tab[i], tab[i + 1]) < 0 && !asc && !desc)
			asc = 1;
		else if (f(tab[i], tab[i + 1]) > 0 && asc)
			return (0);
		else if (f(tab[i], tab[i + 1]) < 0 && desc)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int compare(int a, int b)
{
	if(a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}
int main()
{
	int sorted_asc[] = {1, 2, 3, 4, 5};
    int sorted_desc[] = {5, 5, 5, 4, 3, 3, 2, 2, 1};
    int unsorted[] = {3, 1, 4, 2, 5};

    printf("Test 1 (Ascending sorted): %d\n", 
	ft_is_sort(sorted_asc, 5, compare));  // Should print 1
    printf("Test 2 (Descending sorted): %d\n", 
	ft_is_sort(sorted_desc, 9, compare));  // Should print 1
    printf("Test 3 (Unsorted): %d\n", 
	ft_is_sort(unsorted, 5, compare));  // Should print 0
	return 0;
}*/
