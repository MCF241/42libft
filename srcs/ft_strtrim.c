/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 15:15:24 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/26 12:06:03 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*nstr;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	if (*s == '\0')
		return ((char *)s);
	end = ft_strlen(s) - 1;
	i = 0;
	while (ft_is_white(s[i]))
		++i;
	if (i < end)
		while (ft_is_white(s[end]))
			--end;
	start = i;
	if ((nstr = (char *)malloc(end - start + 2)))
	{
		i = -1;
		while (start + ++i <= end)
			nstr[i] = s[start + i];
		nstr[i] = '\0';
	}
	return (nstr);
}
