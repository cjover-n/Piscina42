/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:58:07 by lgonzale          #+#    #+#             */
/*   Updated: 2019/09/08 17:12:26 by lgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int col;

	col = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((row == 1 && col == 1) || (row == 1 && col == y))
				ft_putchar('A');
			else if ((row == x && col == 1) || (row == x && col == y))
				ft_putchar('C');
			else if ((col > 1 && col < y) && (row > 1 && row < x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			row++;
		}
		write(1, "\n", 1);
		col++;
	}
}
