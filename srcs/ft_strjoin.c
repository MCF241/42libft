/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 14:15:19 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/23 12:56:21 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sizes1;
	size_t	sizes2;
	char	*nstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	sizes1 = ft_strlen((char*)s1);
	sizes2 = ft_strlen((char*)s2);
	nstr = (char*)malloc(sizeof(char) * (sizes1 + sizes2) + 1);
	if (nstr == NULL)
		return (NULL);
	sizes1 = -1;
	sizes2 = -1;
	while (s1[++sizes1] != '\0')
		nstr[sizes1] = s1[sizes1];
	while (s2[++sizes2] != '\0')
		nstr[sizes1 + sizes2] = s2[sizes2];
	nstr[sizes1 + sizes2] = '\0';
	return (nstr);
}
