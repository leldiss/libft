/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:38:37 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/10 17:38:37 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	n_or_p;
	int	result;

	result = 0;
	n_or_p = 1;
	i = 0;
	while (str[i] == '\r' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n_or_p *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] % 48);
		i++;
	}
	return (result * n_or_p);
}
