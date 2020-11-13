/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:54:20 by lgonzale          #+#    #+#             */
/*   Updated: 2019/09/08 20:29:55 by lgonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((row == 1 && col == 1) || (row == x && col == 1))
				ft_putchar('A');
			else if ((row == 1 && col == y) || (row == x && col == y))
				ft_putchar('C');
			else if ((col > 1 && col < y) && (row > 1 && row < x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
