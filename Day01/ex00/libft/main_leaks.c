/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_leaks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:09:42 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/09 21:06:23 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <stdlib.h>


/*static void		ft_lstclean(t_list **begin)
{
	t_list *next_tmp;

	while ((*begin))
	{
		printf("HELLO");
		next_tmp = (*begin)->next;
		free(&((*begin)->content));
		(*begin)->content = NULL;
		*begin = next_tmp;
		free((*begin));
	}
	free((begin));
	(*begin) = NULL;
}*/

static void		ft_lstclean(t_list **begin)
{
	t_list *next_tmp;

		while ((*begin) != NULL)
		{
			next_tmp = (*begin)->next;
			free(&(*begin)->content);
			(*begin)->content = NULL;
			//free(((*begin)->next));
			//(*begin)->next = NULL;
			*begin = next_tmp;
		}
		(*begin) = NULL;
		free((*begin));
}


void		ft_lstprint(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		ft_putstr("\n");
		list = list->next;
	}
}

t_list		*ft_lstprintone(t_list *list)
{
	ft_putstr(list->content);
	return (list);
}
t_list		*ft_lstchange(t_list *list)
{
	list->content = "POTATO";
	return (list);
}

int		main(void)
{
	t_list *new;
///t_list *fine;
	new = ft_lstnew("Heldasl", 4);
	ft_lstadd(&new, ft_lstnew("", 0));
	ft_lstadd(&new, ft_lstnew("Pasd", 0));
//	ft_lstprint(new);
//	ft_putstr("\naaaaa\n");*/
	//fine = ft_lstmap(new, &ft_lstchange);
	//t_lstprint(fine);
	//printf("%s", new->content);

//printf("%s", new->content);
//ft_lstmap_clean(&new);
ft_lstclean(&new);

free(new);
//free(fine);
	//ft_lstmap_clean(&fine);
	//free(fine->content);
	//free(fine);

	//free(fine);
	//char **t;
	//t = ft_strsplit("**HELLO**GOD***HAVE**FUN", '*');

	return (0);
}
