/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 17:33:04 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/03 17:33:07 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	double rac;
	double tab[2];

	rac = nb;
	tab[0] = 0;
	if (nb < 0)
		return (0);
	while ((int)(rac * rac) != nb)
	{
		tab[1] = rac;
		if (tab[1] == tab[0])
			break ;
		rac = (rac + (nb / rac)) / 2;
		tab[0] = tab[1];
	}
	if (((int)rac * (int)rac) == nb)
		return ((int)rac);
	return (0);
}
