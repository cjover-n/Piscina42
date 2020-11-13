/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:03:26 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/21 17:45:42 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int		main(void)
{
	//char hola[] = "hola, ¿cómo estás? 42palabras cuarenta-y-dos; cincuenta+y+uno";

	char hola[] = "ReKt17+LOl MdR Mdr 4242l42$";
	printf("%s\n", ft_strcapitalize(hola));
}
