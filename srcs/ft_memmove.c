/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 09:33:38 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/13 15:28:32 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dsrc;
	unsigned char	*ddst;

	i = -1;
	dsrc = (unsigned char*)src;
	ddst = (unsigned char*)dst;
	if (dsrc < ddst)
	{
		while ((int)(--len) >= 0)
			ddst[len] = dsrc[len];
	}
	else
	{
		while (++i < len)
			ddst[i] = dsrc[i];
	}
	return (dst);
}
