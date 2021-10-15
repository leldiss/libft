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
	size_t	len;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strrchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strrchr(set, *(s1 + len)))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
