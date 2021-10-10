/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leldiss <leldiss@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:35:09 by leldiss           #+#    #+#             */
/*   Updated: 2021/10/09 19:35:09 by leldiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**free_null(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

int	count_word(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			counter++;
		i++;
	}
	return (counter);
}

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (s[i] == '\0')
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		k = 0;
		while (s[j] != '\0' && s[j] != c)
		{
			k++;
			j++;
		}
		str[i] = ft_strndup(&s[j - k], k);
		i++;
		j++;
	}
	return (str);
}
