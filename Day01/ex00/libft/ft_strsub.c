/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:49:34 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/29 20:11:01 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new;

	if (s == NULL)
		return (NULL);
	if (!(ft_strlen((char *)s) - start >= len))
		return (NULL);
	if (!(new = (char *)(malloc(sizeof(char) * len + 1))))
		return (NULL);
	ft_strncpy(new, s + start, len);
	*(new + len) = '\0';
	return (new);
}
