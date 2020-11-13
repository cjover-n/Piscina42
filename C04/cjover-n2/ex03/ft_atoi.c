/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjover-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:59:43 by cjover-n          #+#    #+#             */
/*   Updated: 2019/09/25 16:54:33 by cjover-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	sign = 0;
	nb = 0;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 0 && str[i] <= 9)
	{
		nb = nb * 10;
		nb += (int)str[i] - '0';
		i++;
	}
	if (sign == 1)
		return (-res);
	else
		return (nb);
}