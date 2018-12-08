/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:08:47 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/07 02:00:52 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*elem;

		elem = new;
		elem->next = *alst;
		*alst = elem;
}
