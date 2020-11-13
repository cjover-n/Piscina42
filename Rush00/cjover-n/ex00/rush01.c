/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:51:56 by anmartin          #+#    #+#             */
/*   Updated: 2019/09/08 19:48:57 by lgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int col;
	int row;

	col = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((row == 1 && col == 1) || (row == x && col == y))
				ft_putchar('/');
			else if ((row == 1 && col == y) || (row == x && col == 1))
				ft_putchar('\\');
			else if ((col > 1 && col < y) && (row > 1 && row < x))
				ft_putchar(' ');
			else
				ft_putchar('*');
			row++;
		}
		write(1, "\n", 1);
		col++;
	}
}
