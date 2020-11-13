/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanchez <gsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:11:19 by gsanchez          #+#    #+#             */
/*   Updated: 2019/09/22 20:47:18 by gsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/rush.h"

int		main(int argc, char **argv)
{
	if (argc > 2)
		write(1, "Error\n", 6);
	else if (argc == 2)
	{
		if (valide_arg(argv[1]))
			take_value(argv[1]);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}