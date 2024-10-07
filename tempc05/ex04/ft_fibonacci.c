/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:08:57 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/11 17:32:42 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = 2;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return ft_fibonacci(index -  1) + ft_fibonacci(index - 2);
}
/*
#include <stdio.h>
int main()
{
	printf("fibo n=6: %d\n", ft_fibonacci(6));
	printf("fibo n=9: %d\n", ft_fibonacci(9));
	return 0;
}*/
