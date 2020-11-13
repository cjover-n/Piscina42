/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:12:13 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/22 20:21:55 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int y;
	unsigned int aux;

	x = 0;
	y = 0;
	aux = 0;
	while (dest[x] != '\0')
	{
		cont1++;
	}
	while (src[aux] != '\0')
	{
		aux++;
	}
	if (size <= x)
	{
		aux = aux + size;
	}
	else
	{
		aux = aux + x;
	}
	while ((src[y] != '\0') && ((x + 1) < size))
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (aux);
}
