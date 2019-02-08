/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 17:35:36 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/03 17:35:39 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	if ((unsigned int)c >= 97 && (unsigned int)c <= 122)
	{
		c = (unsigned int)c - 32;
		return (c);
	}
	else
		return (c);
}
