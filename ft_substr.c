/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:57:09 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/10 18:57:09 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - (size_t)start > len)
		d = malloc(len + 1);
	else
		d = malloc(ft_strlen(s) - (size_t)start + 1);
	if (!d)
		return (NULL);
	while (i < len && s[start])
	{
		d[i] = s[start];
		i++;
		start++;
	}
	d[i] = 0;
	return (d);
}
