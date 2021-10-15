/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:56:15 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/12 22:56:15 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*swap;

	while ((*lst) != NULL)
	{
		del((*lst)->content);
		swap = (*lst);
		(*lst) = (*lst)->next;
		free(swap);
	}
}
