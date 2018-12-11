/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:03:34 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/11 16:06:56 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_lstprint(t_list *list)
{
	if (!list)
		return (NULL);
	while (list)
	{
		ft_putstr(list->content);
		ft_putstr("\n");
		list = list->next;
	}
}
