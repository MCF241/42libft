/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 08:32:26 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/07 08:32:32 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (s);
	while (i < (int)n)
	{
		*((char*)s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
