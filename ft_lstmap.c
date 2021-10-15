/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:59:40 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/12 22:59:40 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*swaplst;

	newlst = NULL;
	while (lst != NULL)
	{
		swaplst = ft_lstnew(f(lst->content));
		if (!swaplst)
			break ;
		ft_lstadd_front(&newlst, swaplst);
		lst = lst->next;
	}
	if (!swaplst)
	{
		while (!newlst)
		{
			del(newlst->content);
			swaplst = newlst;
			newlst = newlst->next;
			free(swaplst);
		}
		return (NULL);
	}
	return (newlst);
}
