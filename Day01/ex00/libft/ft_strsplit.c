/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:25:35 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/30 22:10:21 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_strsplit_nwords(char const *s, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			count++;
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

	while (k < ft_strsplit_nwords(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!(matrix[j] = (char*)(malloc(sizeof(char)\
			* ft_strsplit_getlen(s + i, c) + 1))))
			return (NULL);

			while (s[i] != c )
				{
					matrix[j][k] = 'a';
					printf("M%c, S%c", matrix[j][k], s[i]);
					i++;
					j++;
				}
	/*	while (s[i] != c && s[i] != '\0')
		{
			matrix[j][k] = s[i];
			printf("%c", matrix[j][k]);
			i++;
		}*/
		k++;
	}
	return (matrix);
}

char		**ft_strsplit(char const *s, char c)
{
	char **matrix;

	matrix = NULL;
	if (!(matrix = (char**)(malloc(sizeof(char*)\
	 * ft_strsplit_nwords(s, c) + 1))))
		return (NULL);
	matrix[ft_strsplit_nwords(s, c)] = NULL;
	matrix = ft_strsplit_fill(s, c, matrix);

	int k = 0;
	while (matrix[k] != 0)
	{
		printf(" 1 %s\n", matrix[k]);
		k++;
	}
	return (matrix);
}
