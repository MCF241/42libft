/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_white.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 13:25:19 by mcancela          #+#    #+#             */
/*   Updated: 2018/12/26 12:07:32 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_white(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
