/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-tui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:10:00 by tvan-tui          #+#    #+#             */
/*   Updated: 2024/09/25 16:03:39 by tvan-tui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	first;
	char	second;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			first = "0123456789abcdef"[(unsigned char)str[i] / 16];
			second = "0123456789abcdef"[(unsigned char)str[i] % 16];
			write(1, &first, 1);
			write(1, &second, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
#include <stdio.h>
int main(void)
{
    //char test_str[] = "Coucou\nTu vas bien ?";
	//char test_str[] = "Hello\x01\x02\x03World!";
	//char test_str[] = "This is a normal string.";
	char test_str[] = "\x7F\x80\xFF";
	//char test_str[] = "";
	//char test_str[] = "Tab:\t Newline:\n Null:\0";
    
    ft_putstr_non_printable(test_str); // Test the function
    
    return 0;
}
