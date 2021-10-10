/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:49:21 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/09 20:49:21 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strrchr(set, s1[start]) != NULL)
		start ++;
	len = ft_strlen(&s1[start]);
	if (len != 0)
		while (s1[start + len - 1]
			&& ft_strrchr(set, s1[start + len - 1] != 0))
			len--;
	return (ft_substr(s1, start, len));
}
