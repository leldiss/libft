/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 22:38:01 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/09 22:38:01 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	count_digits(int n)
{
	int	k;

	k = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		k = 1;
	while (n != 0)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		c;
	int		i;

	c = count_digits(n);
	i = c - 1;
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[i] = ft_abs(n % 10) + '0';
		n /= 10;
		i--;
	}
	str[c] = '\0';
	return (str);
}
