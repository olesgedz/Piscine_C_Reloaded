/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 17:29:39 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/05 19:18:47 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *temp_next;

	temp_next = NULL;
	while (alst != NULL)
	{
		if (alst)
		{
			temp_next = (*alst)->next;
			ft_lstdelone(alst, del);
			(*alst)->next = NULL;
			free((*alst)->next);
			*alst = temp_next;
		}
	}
	*alst = NULL;
}
