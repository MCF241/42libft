/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 10:47:21 by mcancela          #+#    #+#             */
/*   Updated: 2019/02/28 11:27:38 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** Function to reallocate memory take from awoimbee2student.42.fr
** take astring [oldstr] and the size of memory to add.  check if oldstr have a
** size and if null then give 0 by default. Then add the [addsize] to memory
** location by creating a new memory space and return it.
*/

char	*ft_realloc(char *oldstr, size_t addsize)
{
	char	*newstr;
	size_t	oldsize;

	oldsize = oldstr ? ft_strlen(oldstr) : 0;
	if (!(newstr = ft_strnew(oldsize + addsize)))
		return (NULL);
	if (oldsize)
	{
		newstr = ft_strncpy(newstr, oldstr, oldsize);
		free(oldstr);
	}
	return (newstr);
}
