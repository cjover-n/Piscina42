/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:24:47 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/12 20:31:15 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int		main(void)
{
	char *texto;

	texto = "Hola mundo!";
	ft_putstr(texto);

	return (0);
}
