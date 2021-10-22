/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:30:23 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/08 14:30:23 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src < dst)
	{
		while (n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
		return ((unsigned char *)dst);
	}
	else
		return (ft_memcpy(dst, src, n));
}
