/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanchez <gsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:24:46 by gsanchez          #+#    #+#             */
/*   Updated: 2019/09/22 18:04:33 by gsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "../include/rush.h"

void	find_key(char *str)
{
	int	file;
	int esc;
	int pos;
	int buf;

	file = open(NAME_DIC, O_RDONLY);
	if (file != -1)
	{
		esc = 0;
		while (!esc)
		{
			pos = 0;
			read(file, &buf, 1);
			while (str[pos++] == buf)
				read(file, &buf, 1);
			if (!str[--pos] || &buf == 0)
				esc = 1;
		}
		while (buf == ':' || buf == ' ')
			read(file, &buf, 1);
		while (buf != '\n')
		{
			write (1, &buf, 1);
			read(file, &buf, 1);
		}
		write(1, " ", 1);
		close(file);
	}
	else
		write(1, "Dict error\n", 11);
}