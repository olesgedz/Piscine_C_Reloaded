/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:23:23 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/28 16:58:52 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void		*ft_memalloc(size_t size)
{
	void *new;
	size_t i;

	i = 0;
	new = NULL;
	if ((new = (void *)malloc(size)))
		return (NULL);


	/*while (i < size)
		((unsigned char*)new)[i++] = 0;*/
	ft_bzero(new, size);
	//printf("%d", *(int*)new);
	/*while (i < size)
	{
		((unsigned char)new)[i] = 0;
		i++;
	}*/
	return (new);
}
