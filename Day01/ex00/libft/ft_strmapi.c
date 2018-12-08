/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:30:23 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/08 20:19:19 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

static char		ft_u_striteri(char *s, char (*f)(unsigned int, char))
{
	int i;

	i = 0;
	if (s)
		while (*s)
		{
			*s = f(i, *s);
			s++;
			i++;
		}
	return (*s);
}

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new;

	if (s == NULL)
		return (NULL);
	if (!(new = (char *)(malloc(sizeof(char) * ft_strlen((char *)s) + 1))))
		return (NULL);
	ft_strcpy(new, s);
	ft_u_striteri(new, f);
	return (new);
}
