/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 20:53:34 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/05 17:10:28 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = NULL;
	if (!(new = (t_list *)(malloc(sizeof(t_list)))))
		return (NULL);
	if (new)
	{
		if (content == NULL)
		{
			new->content = NULL;
			new->content_size = 0;
		}
		else
		{
			new->content = (void *)content;
			new->content_size = content_size;
		}
		new->next = NULL;
	}
	return (new);
}