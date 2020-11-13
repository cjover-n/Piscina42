/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:24:47 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/12 22:44:28 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int		main(void)
{
	char *texto;

	texto = "Hola mundo!";
	int i = ft_strlen(texto);

	printf("El número es %d", i);

	return (0);
}
