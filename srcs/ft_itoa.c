/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:21:01 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/21 10:56:48 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				cpt;
	unsigned int	nbr;
	char			*nstr;

	nbr = ABS(n);
	cpt = ft_nb_digits(nbr);
	if (n > -10 && n < -1)
		cpt = 1;
	if (!(nstr = ft_strnew(cpt + 1)))
		return (NULL);
	if (n < 0)
		nstr[0] = '-';
	if (n > 0)
		cpt--;
	while (cpt > 0)
	{
		nstr[cpt--] = (nbr % 10) + '0';
		nbr = (nbr / 10);
	}
	if (n > 0 || n == 0)
		nstr[cpt] = nbr + '0';
	return (nstr);
}
