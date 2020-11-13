/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanchez <gsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:11:40 by gsanchez          #+#    #+#             */
/*   Updated: 2019/09/22 19:08:05 by gsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rush.h"

void	take_value(char *str)
{
	int size;
	int pos;
	int mil;
	char *div;

	size = ft_strlen(str) - 1;
	pos = size;
	mil = size / 3;

	while (pos > -1)
	{
		if ( pos % 3 == 2)
		{
			if (str[size - pos] != '0')
			{
				part_str(str, &div, 1, pos);
				find_key(div);
				find_key("100");
				free(div);
			}
			pos--;
			if (str[size - pos] == '0' && str[size - (--pos)] == '0')
				pos--;
			free(div);
		}
		else if (pos % 3 == 1)
		{
			if (str[size - pos] > '1')
			{
				part_str(str, &div, 1, pos);
				find_key(div);
				pos--;
				if (str[size - pos] == '0')
					pos--;
				free(div);
			}
			else if (str[size - pos] > '1')
			{
				part_str(str, &div, 2, pos);
				find_key(div);
				pos -= 2;
				free(div);
			}
			else 
				pos--;
		}
		else if (pos % 3 == 0)
		{
			part_str(str, &div, 1, pos);
			find_key(div);
			pos--;
			free(div);
		}
		if (mil != 0 && pos % 3 == 2)
		{
			div = set_mil(mil);
			find_key(div);
			free(div);
			mil--;
		}
	}
	write (1, "\n", 1);
}