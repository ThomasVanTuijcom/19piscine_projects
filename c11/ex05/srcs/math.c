/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:07:23 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/23 11:07:58 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "math.h"

int	sum(int a, int b)
{
	return (a + b);
}

int	substract(int a, int b)
{
	return (a - b);
}

int	divide(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	return (a / b);
}

int	modulo(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	return (a % b);
}
