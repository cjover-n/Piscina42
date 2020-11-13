/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:54:52 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/15 15:40:16 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	logica();

void	col_up(char col1, char col2, char col3, char col4)
{
	int col1up;
	int col2up;
	int col3up;
	int col4up;

	col1up = (int)col1 - 48;
	col2up = (int)col2 - 48;
	col3up = (int)col3 - 48;
	col4up = (int)col4 - 48;
	logica();
}

void	col_down(char col1, char col2, char col3, char col4)
{
	int col1down;
	int col2down;
	int col3down;
	int col4down;

	col1down = (int)col1 - 48;
	col2down = (int)col2 - 48;
	col3down = (int)col3 - 48;
	col4down = (int)col4 - 48;
	logica();
}

void	row_left(char row1, char row2, char row3, char row4)
{
	int row1left;
	int row2left;
	int row3left;
	int row4left;

	row1left = (int)row1 - 48;
	row2left = (int)row2 - 48;
	row3left = (int)row3 - 48;
	row4left = (int)row4 - 48;
	logica();
}

void	row_right(char row1, char row2, char row3, char row4)
{
	int row1right;
	int row2right;
	int row3right;
	int row4right;

	row1right = (int)row1 - 48;
	row2right = (int)row2 - 48;
	row3right = (int)row3 - 48;
	row4right = (int)row4 - 48;
	logica();
}
