/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:05:55 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/15 16:05:55 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*arr;

	if (!size || !num)
	{
		num = 1;
		size = 1;
	}
	arr = malloc(num * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * num);
	return (arr);
}
