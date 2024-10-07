/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:51:30 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/13 11:31:59 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*smallest;
	char	*biggest;

	i = 1;
	if (argc <= 1)
		return (0);
	biggest = argv[i];
	while (i < argc - 1 && argv[i])
	{
		j = i + 1;
		smallest = argv[i++];
		while (j < argc && argv[j])
		{
			if (ft_strcmp(smallest, argv[j]) > 0)
				smallest = argv[j];
			else if (ft_strcmp(biggest, argv[j]) < 0)
				biggest = argv[j];
			j++;
		}
		ft_putstr(smallest);
	}
	ft_putstr(biggest);
	return (0);
}
