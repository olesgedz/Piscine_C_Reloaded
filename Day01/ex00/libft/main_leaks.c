/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_leaks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:09:42 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/09 19:15:50 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

/*void		ft_lstprint(t_list *list)
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
}*/

int		main(void)
{
	/*t_list *new;
	t_list *fine;
	new = ft_lstnew("Hello", 6);
	ft_lstadd(&new, ft_lstnew("People", 7));
	ft_lstprint(new);
	ft_putstr("\naaaaa\n");
	fine = ft_lstmap(new, &ft_lstchange);
	ft_lstprint(fine);*/
	char **t;
	t = ft_strsplit("**HELLO**GOD***HAVE**FUN", '*');
	return (0);
}
