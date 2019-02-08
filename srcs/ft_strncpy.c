/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 16:35:32 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/03 15:15:57 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (ft_strlen(src) >= len)
	{
		while (i < len)
		{
			dest[i] = src[i];
			++i;
		}
	}
	if (ft_strlen(src) < len)
	{
		while (i < ft_strlen(src))
		{
			dest[i] = src[i];
			++i;
		}
		while (i < len)
		{
			dest[i] = '\0';
			++i;
		}
	}
	return (dest);
}
