/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 20:53:34 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/05 20:31:25 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = NULL;
	printf("d21312wasdadf3\n\n\n");
	if (!(new = (t_list *)(malloc(sizeof(t_list)))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
		printf("d213123");
	}
	else
	{

		new->content = malloc(content_size * sizeof(char));
		printf("dasfsd");
		if (!(new->content = malloc(content_size * sizeof(char))))
		{
			printf("dassadasdasddfg324234");
			free(new);
			return (NULL);
		}
		new->content = (void *)(content);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
