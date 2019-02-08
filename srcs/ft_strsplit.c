/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 15:08:15 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/03 15:08:22 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	freemem(char **ptr)
{
	unsigned int i;

	if (ptr)
	{
		i = 0;
		while (ptr[i])
			free(ptr[i++]);
		free(ptr);
		ptr = NULL;
	}
}

static int	getnextword(char *s, char c, int *start)
{
	int		i;
	size_t	len;

	i = 0;
	while (s[i] == c)
		++i;
	if (s[i] == '\0')
		return (0);
	*start = i;
	len = 1;
	while (s[i + len] != '\0' && s[i + len] != c)
		++len;
	return ((int)len);
}

static int	countwords(char const *s, char c)
{
	size_t	i;
	size_t	len;
	int		start;
	char	*pstart;

	pstart = (char *)s;
	i = 0;
	while ((len = getnextword(pstart, c, &start)))
	{
		++i;
		pstart += start + len;
	}
	return ((int)i);
}

static char	*setnextword(const char *str, size_t len)
{
	char	*dest;
	size_t	i;

	if ((dest = (char *)ft_memalloc(len + 1)))
	{
		i = 0;
		while (i < len)
		{
			dest[i] = str[i];
			++i;
		}
		dest[i] = '\0';
	}
	return (dest);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	len;
	int		start;
	char	*pstart;
	char	**ptrim;

	ptrim = NULL;
	if (s && (ptrim = (char **)malloc(sizeof(char *) * (countwords(s, c) + 1))))
	{
		pstart = (char *)s;
		i = 0;
		while ((len = getnextword(pstart, c, &start)))
		{
			pstart += start;
			if (!(ptrim[i] = setnextword(pstart, len)))
			{
				freemem(ptrim);
				return (NULL);
			}
			++i;
			pstart += len;
		}
		ptrim[i] = NULL;
	}
	return (ptrim);
}
