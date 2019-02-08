/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 08:34:20 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/07 10:51:59 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*srctmp;
	unsigned char	*dsttmp;

	i = 0;
	srctmp = (unsigned char*)src;
	dsttmp = (unsigned char*)dst;
	while (i < (int)n)
	{
		*(dsttmp + i) = *(srctmp + i);
		if ((unsigned char)c == *(srctmp + i))
			return (dsttmp + i + 1);
		i++;
	}
	return (NULL);
}
