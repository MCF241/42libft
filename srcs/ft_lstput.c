/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 08:55:46 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/07 07:54:48 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstput(t_list *lst)
{
	t_list *current;

	if (lst == NULL)
		return ;
	current = lst;
	while (current != NULL)
	{
		ft_putstr(lst->content);
		current = current->next;
	}
	ft_putstr("NULL\n");
}
