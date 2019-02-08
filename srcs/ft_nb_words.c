/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 11:24:03 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/03 14:47:03 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nb_words(char *dest, char *src, char c)
{
	int j;
	int nbw;

	j = 0;
	nbw = 0;
	while (*src == c)
		src++;
	while (*src != '\0')
	{
		if (j == 0)
		{
			j = 1;
			++nbw;
		}
		*dest++ = *src++;
		if (*src == c)
		{
			*dest++ = '\0';
			j = 0;
			while (*src == c)
				src++;
		}
	}
	return (nbw);
}
