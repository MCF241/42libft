/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 17:35:27 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/03 17:35:29 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((unsigned int)c >= 65 && (unsigned int)c <= 90)
	{
		c = (unsigned int)c + 32;
		return (c);
	}
	else
		return (c);
}
