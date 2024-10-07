/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:47:35 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/11 17:06:34 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power != 0)
		return nb * ft_recursive_power(nb, power - 1);
	else
		return (1);
}
#include <stdio.h>
int main()
{
	printf("4 pow 3: %d\n", ft_recursive_power(4, 3));
	printf("0 pow 0: %d\n", ft_recursive_power(0, 0));
	printf("4 pow -1: %d\n", ft_recursive_power(4, -1));
	printf("4 pow 0: %d\n", ft_recursive_power(4, 0));
	return 0;
}
