/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 13:54:20 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/17 19:29:56 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ns;

	if (s == NULL)
		return (NULL);
	if (!(ns = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		ns[i] = f(i, s[i]);
		++i;
	}
	return ((char*)ns);
}
