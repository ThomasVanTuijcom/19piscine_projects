/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:47:41 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/11 14:46:48 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb < 0)
		return (0);
	nb--;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
#include <stdio.h>
int main()
{
	int test = ft_iterative_factorial(5);
	printf("!5 = %d", test);
	return 0;
}
