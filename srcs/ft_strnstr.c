/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:40:49 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/19 13:23:31 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	needlen;

	if (*needle == '\0')
		return ((char*)haystack);
	needlen = ft_strlen(needle);
	i = 0;
	while (*haystack != '\0' && (i + needlen - 1) < n)
	{
		if (ft_strncmp((char*)haystack, (char*)needle, needlen) == 0)
			return ((char*)haystack);
		++i;
		++haystack;
	}
	return (NULL);
}
