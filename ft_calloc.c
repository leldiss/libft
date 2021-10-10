/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:44:29 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/10 18:44:29 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*arr;

	if (!size || !num)
	{
		size = 1;
		num = 1;
	}
	arr = malloc(size * num);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, size * num);
	return (arr);
}
