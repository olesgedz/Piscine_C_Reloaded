/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:25:35 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/03 14:55:22 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_strsplit_nwords(char const *s, char c)
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
				while(s[i] != c)
					i++;
			}
			else
				i++;
	}
	return (count);
}

int		ft_strsplit_getlen(char const *s, char c)
{
	int count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

char		**ft_strsplit_fill(char const *s, char c, char **matrix)
{
	int j;
	int i;
	int k;

	k = 0;
	i = 0;
	j = 0;
	while (j < ft_strsplit_nwords(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!(matrix[j] = (char*)(malloc(sizeof(char)\
			* ft_strsplit_getlen(s + i, c)))))
			return (NULL);
		while (s[i] != '\0')
			{
					if (s[i] != c)
					{
						matrix[j][k] = s[i];

						k++;
					}
					else
						break ;
					i++;

			}
		matrix[j][k] = '\0';
		k = 0;
		j++;
	}
	return (matrix);
}

char		**ft_strsplit(char const *s, char c)
{
	char **matrix;

	matrix = NULL;
	if (s == NULL)
		return (NULL);
	if (!(matrix = (char**)(malloc(sizeof(char*)\
	 * (ft_strsplit_nwords(s, c))))))
		return (NULL);
	matrix[ft_strsplit_nwords(s, c)] = NULL;
	matrix = ft_strsplit_fill(s, c, matrix);
	return (matrix);
}
