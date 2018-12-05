/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:25:35 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/04 20:50:40 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_ln_w(char *str, int i, char c)
{
	int count;

	count = 0;
	while (str[i] != c && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

int		ft_n_words(char *s, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

int		ft_strsplit_cleanup(char **dst)
{
	while (*dst)
	{
		free(*dst);
		dst++;
	}
	free(dst);
	return (1);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**dst;
	int		k;
	int		j;
	int		i;

	i = 0;
	j = 0;
	if (!s || !(dst = malloc(sizeof(char*) * (ft_n_words((char *)s, c)))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			k = 0;
			if (!(dst[j] = malloc(sizeof(char) \
			* ft_ln_w((char *)s, i, c) + 1)) && ft_strsplit_cleanup(dst))
				return (NULL);
			while (s[i] != c && s[i])
				dst[j][k++] = s[i++];
			dst[j++][k] = '\0';
		}
	}
	return (dst);
}
