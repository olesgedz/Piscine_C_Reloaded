/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:56:51 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/04 17:09:52 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void		ft_putstr(char const *s)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		ft_putchar((char)(*s));
		s++;
	}
}
