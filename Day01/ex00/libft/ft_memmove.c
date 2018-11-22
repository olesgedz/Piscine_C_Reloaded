/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 20:16:43 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/22 20:42:29 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	int a = 0;
	i = 0;
	while (i < len)
	{
		//if ((dst + a < src) || ( dst + a > src + len))

	 ((char*)dst)[i] = ((char*)src)[i];
		i++;
		a++;
	}
	return (dst);
}
