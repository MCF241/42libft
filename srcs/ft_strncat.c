/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 07:45:44 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/11 08:06:44 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (s2[j] != '\0')
		j++;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (j <= n)
	{
		if (s2[j] == '\0')
		{
			s1[i + j] = '\0';
			return (s1);
		}
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + --j] = '\0';
	return (s1);
}
