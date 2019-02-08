/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 08:30:25 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/17 14:37:00 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					neg;
	int					cpt;
	unsigned long long	results;

	cpt = 0;
	neg = 1;
	results = 0;
	while (str[cpt] == 32 || (str[cpt] >= 9 && str[cpt] <= 13))
		cpt++;
	if (str[cpt] == '-')
		neg = -1;
	if (str[cpt] == '+' || str[cpt] == '-')
		cpt++;
	while (str[cpt] >= '0' && str[cpt] <= '9')
	{
		results = results * 10 + (str[cpt] - '0');
		cpt++;
	}
	if (cpt > 19 || results > 9223372036854775807ULL)
		return (neg == 1 ? -1 : 0);
	return ((long int)results * neg);
}
