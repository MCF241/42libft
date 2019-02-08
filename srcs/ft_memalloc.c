/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 15:40:21 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/21 10:27:39 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*newmem;

	newmem = malloc(size);
	if (newmem == NULL)
		return (NULL);
	ft_memset(newmem, 0, size);
	return (newmem);
}
