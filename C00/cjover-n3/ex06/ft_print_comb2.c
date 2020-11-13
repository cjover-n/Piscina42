/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <cjover-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:50:02 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/10 21:15:42 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	pair;
	int		a;
	int		b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			pair = (a / 10) + '0';
			write(1, &pair, 1);
			pair = (a % 10) + '0';
			write(1, &pair, 1);
			write(1, " ", 1);
			pair = (b / 10) + '0';
			write(1, &pair, 1);
			pair = (b % 10) + '0';
			write(1, &pair, 1);
			if (a < 98)
				write(1, ", ", 2);
		}
	}
}
