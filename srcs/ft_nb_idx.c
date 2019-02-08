/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_idx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 15:04:55 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/03 10:52:37 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_nb_idx(char **nt, const char *ns, int nbw)
{
	int	i;

	i = 0;
	while (i < nbw)
	{
		nt[i] = (char *)ns;
		ns += ft_strlen((char *)ns) + 1;
		i++;
	}
	nt[i] = NULL;
}
