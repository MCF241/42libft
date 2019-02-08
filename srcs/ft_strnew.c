/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:41:10 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/21 11:03:54 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*nstr;

	nstr = (char*)malloc(sizeof(char) * (size + 1));
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < (int)size)
	{
		nstr[i] = '\0';
		++i;
	}
	nstr[i] = '\0';
	return (nstr);
}
