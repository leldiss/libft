/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:29:56 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/10 18:29:56 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = (unsigned char *)dst;
	while (i < n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
