/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 13:57:28 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/17 18:38:10 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ns;

	if (s == NULL)
		return (NULL);
	if (!(ns = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		ns[i] = f(s[i]);
		++i;
	}
	return ((char*)ns);
}
