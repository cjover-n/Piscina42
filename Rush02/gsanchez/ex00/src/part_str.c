/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanchez <gsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:34:44 by gsanchez          #+#    #+#             */
/*   Updated: 2019/09/22 16:59:59 by gsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/rush.h"

void	part_str(char *str, char **div, int n, int pos)
{
	int size;

	size = ft_strlen(str) - 1;
	*div = malloc(sizeof(char) * (n + 1));
	ft_stcpy(*div, &str[size - pos], n);
	if (n = 2 && div[0][0] != '1')
		div[0][1] = '0';
}