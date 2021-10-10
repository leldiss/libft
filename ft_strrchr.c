/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:35:20 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/10 18:35:20 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*st;
	char	*node;

	st = (char *)str;
	node = NULL;
	if (ch == '\0')
		return ((char *)st + ft_strlen(st));
	while (*st)
	{
		if (*st == (char)ch)
			node = st;
		st++;
	}
	return ((char *)node);
}
