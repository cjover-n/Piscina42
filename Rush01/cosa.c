/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cosa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:48:52 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/15 17:54:46 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	col_up();
void	col_down();
void	row_left();
void	row_right();

void	whileando(int contu, int contd, int contl, int contr, char table[4][4])
{
	while (contu <= 4)
	{
		while (countd <= 4)
		{
			while (contl <= 4)
			{
				while (contr <= 4)
				{
					//TODO: Sacar respuesta encasillada (usar funciones llamadas si es necesario)
					if (col_up (1, , , ) && col_down (1, , , )
					{
						table[0][0] = 4;
					}

					//TODO: Convertir respuesta a char para guardar en tabla
					table[contu - 1][contl - 1] = ; //TODO: Respuesta encasillada
					//TODO: Escribir Respuesta desde array (se puede hacer aparte en otro archivo con dos while)
					contr++;
				}
				contl++;
			}
			contd++;
		}
		contu++;
	}
}

void	logica()
{
	int contu;
	int contd;
	int contl;
	int contr;
	char table[4][4];

	contu = 1;
	contd = 1;
	contl = 1;
	contr = 1;
	whileando(contu, contd, contl, contr, table);



}
