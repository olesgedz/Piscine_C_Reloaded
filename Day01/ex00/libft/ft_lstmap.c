/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:33:53 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/09 19:52:41 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

static void		ft_lstmap_clean(t_list **begin)
{
	t_list *next_tmp;

	while ((*begin) != NULL)
	{
		next_tmp = (*begin)->next;
		free(&((*begin)->content));
		(*begin)->content = NULL;
		free(&((*begin)->next));
		(*begin)->next = NULL;
		*begin = next_tmp;
	}
	(*begin) = NULL;
	free((*begin));
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*begin;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	if (!(new = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	begin = new;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		if (!(new->next = ft_lstnew(tmp->content, tmp->content_size)))
		{
			ft_lstmap_clean(&begin);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	//ft_lstmap_clean(&begin);
	return (begin);
}
