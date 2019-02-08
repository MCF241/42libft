/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:34:39 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/18 12:56:51 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int nb_trans;

	nb_trans = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb_trans = -n;
	}
	if (nb_trans < 10)
	{
		ft_putchar(nb_trans + '0');
	}
	if (nb_trans > 9)
	{
		ft_putnbr(nb_trans / 10);
		ft_putnbr(nb_trans % 10);
	}
}
