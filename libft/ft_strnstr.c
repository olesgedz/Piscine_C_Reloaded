/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:47:44 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/26 21:06:29 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

static int		ft_strnstrcmp(char *s1, char *s2, size_t len, size_t j)
{
	size_t i;

	i = 0;
	while ((unsigned char)s1[j] == (unsigned char)s2[j]
		&& (unsigned char)s1[j] != '\0' && (unsigned char)s2[j] != '\0'
			&& j < len)
	{
		j++;
		i++;
	}
	if ((unsigned char)s2[j] == '\0')
		j--;
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t j;

	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && j < len)
	{
		if (ft_strnstrcmp((char *)haystack, (char *)needle, len, j) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		j++;
	}
	return (NULL);
}
