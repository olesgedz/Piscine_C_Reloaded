/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:58:00 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/20 17:13:50 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_fill_range(int min, int max, int *range)
{
	int i;

	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
}

int		*ft_range(int min, int max)
{
	int *range;

	range = NULL;
	if (!(range = (int*)(malloc(sizeof(max - min)))))
		return (NULL);
	if (min >= max)
		return (NULL);
	ft_fill_range(min, max, range);
	return (range);
}
