/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 12:55:12 by mcancela          #+#    #+#             */
/*   Updated: 2019/02/01 14:13:08 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*nstr;

	if (s == NULL)
		return (NULL);
	nstr = (char*)malloc(sizeof(char) * (len + 1));
	if (nstr == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (i < (int)len && *s != '\0')
	{
		nstr[i] = s[start];
		++i;
		++start;
	}
	nstr[i] = '\0';
	return (nstr);
}
