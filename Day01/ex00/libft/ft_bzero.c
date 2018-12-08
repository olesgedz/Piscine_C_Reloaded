/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:44:20 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/08 18:07:27 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "includes/libft.h"

void			ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		((unsigned char*)s)[i++] = 0;
}
