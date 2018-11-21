/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:30:31 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/21 21:41:05 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memset(void *b, int c, size_t len)
{
	/*int i;

	i = 0;
	if (!b)
		if (!(b = (unsigned char*)malloc(sizeof(unsigned char) * len)))
		// 	return (NULL);
	while (i < len)
		((unsigned char*)b)[i++] = c;
	printf("%s\n", b);
	return (b);*/

	char *ptr;
	int i;

	i = 0;
	if (!b)
		if (!(b = (unsigned char*)malloc(sizeof(unsigned char) * len)))
			return (b);
		ptr = b;
		while (i < len)
			*(ptr + i++) = c;
		return (b);
}
