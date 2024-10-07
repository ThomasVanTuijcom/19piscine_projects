/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:39:33 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/24 12:51:27 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_atoi.h"
#include "ft_putnbr.h"
#include "ft_putstr.h"
#include "math.h"

int	get_operator_index(char op)
{
	char	*operators;
	int		op_index;
	int		i;

	operators = (char *) malloc(sizeof(char) * 4);
	operators[0] = '+';
	operators[1] = '-';
	operators[2] = '/';
	operators[3] = '%';
	i = 0;
	op_index = -1;
	while (i < 4)
	{
		if (operators[i] == op)
			op_index = i;
		i++;
	}
	return (op_index);
}

int	main(int argc, char *argv[])
{
	int		op_index;
	int		i;
	int		result;
	int		operands[2];
	int		(*p[4])(int, int);

	if (argc != 4)
		return (0);
	i = 0;
	result = 0;
	op_index = get_operator_index(argv[2][0]);
	operands[0] = ft_atoi(argv[1]);
	operands[1] = ft_atoi(argv[3]);
	p[0] = sum;
	p[1] = substract;
	p[2] = divide;
	p[3] = modulo;
	if (op_index != -1)
		result = p[op_index](operands[0], operands[1]);
	if (!(operands[1] == 0 && (argv[2][0] == '/' || argv[2][0] == '%')))
		ft_putnbr(result);
	ft_putstr("\n");
	return (0);
}
