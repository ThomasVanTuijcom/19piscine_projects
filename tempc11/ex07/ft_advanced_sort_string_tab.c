/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:32:01 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/24 13:42:02 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (cmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i] && (a[i] == b[i]))
		i++;
	return ((unsigned char)a[i] - (unsigned char)b[i]);
}

void print_tab(char **tab)
{
    int i = 0;
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
}

// Main function to test ft_sort_string_tab
int main(void)
{
    // Array of strings to be sorted (null-terminated)
    char *tab[] = {"apple", "banane", "drink", "coco", "blueberry", NULL};

    // Print strings before sorting
    printf("Before sorting:\n");
    print_tab(tab);

    // Sort the strings
  	ft_advanced_sort_string_tab(tab, ft_strcmp);

    // Print strings after sorting
    printf("\nAfter sorting:\n");
    print_tab(tab);

    return 0;
}*/
