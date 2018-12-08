/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:07:42 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/29 16:47:10 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

char	*ft_strdup(char *src)
{
	char *new;

	if (!(new = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	ft_strcpy(new, src);
	return (new);
}
