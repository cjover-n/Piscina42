/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanchez <gsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 10:55:16 by gsanchez          #+#    #+#             */
/*   Updated: 2019/09/22 20:16:38 by gsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
#define NAME_DIC "numbers.dict"

int		ft_strlen(char *str);
void	ft_readdict(char *filename);
char	**ft_split(char *str, char sep);
char	*ft_strcpy(char *dest, char *src);
void	find_key(char *str);
void	part_str(char *str, char **div, int n, int pos);
char *set_mil(int n);

#endif