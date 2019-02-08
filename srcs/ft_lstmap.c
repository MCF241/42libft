/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcancela <mcancela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 11:34:06 by mcancela          #+#    #+#             */
/*   Updated: 2019/01/03 11:34:26 by mcancela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_lstdelcontent(void *lst, size_t size)
{
	t_list *ls;

	if (lst)
	{
		ls = (t_list *)lst;
		if (ls->content && ls->content_size == size)
		{
			free(ls->content);
			ls->content = NULL;
			free(ls->content);
		}
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*newelem;

	if (!lst || !f)
		return (NULL);
	newlst = NULL;
	if (lst->next && !(newlst = ft_lstmap(lst->next, f)))
		return (NULL);
	if ((newelem = f(lst)))
		if (newlst)
			ft_lstadd(&newlst, newelem);
		else
			newlst = newelem;
	else
		ft_lstdel(&newlst, &ft_lstdelcontent);
	return (newlst);
}
