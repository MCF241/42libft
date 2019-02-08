/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:34:26 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/17 12:00:33 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb_trans;

	nb_trans = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb_trans = -n;
	}
	if (nb_trans < 10)
	{
		ft_putchar_fd((nb_trans + '0'), fd);
	}
	if (nb_trans > 9)
	{
		ft_putnbr_fd(nb_trans / 10, fd);
		ft_putnbr_fd(nb_trans % 10, fd);
	}
}
