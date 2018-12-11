/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:33:53 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/11 15:32:54 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

static void		ft_lstmap_clean(t_list **begin)
{
	t_list *next_tmp;

	while (*begin)
	{
		free((*begin)->content);
		next_tmp = (*begin)->next;
		free(*begin);
		*begin = next_tmp;
	}
	*begin = NULL;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*sortie;

	if (lst)
	{
		sortie = f(lst);
		sortie->next = ft_lstmap(lst->next, f);
		return (sortie);
	}
	return (NULL);
}
