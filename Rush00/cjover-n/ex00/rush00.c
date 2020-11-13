/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 17:49:51 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/08 19:13:31 by cjover-n         ###   ########.fr       */
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
				ft_putchar('o');
			else if ((row == x && col == 1) || (row == x && col == y))
				ft_putchar('o');
			else if ((col > 1 && col > y) || (row == 1 || row == x))
				ft_putchar('|');
			else if ((row > 1 && row > x) || (col == 1 || col == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			row++;
		}
		write(1, "\n", 1);
		col++;
	}
}
