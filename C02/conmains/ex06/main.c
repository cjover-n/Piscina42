/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:44:52 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/17 17:49:21 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable();

int main(void)
{
	char hola[]= "dffdf4";
	printf("El resultado es: %d", ft_str_is_printable(hola));
}
