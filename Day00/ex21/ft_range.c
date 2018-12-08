/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:58:00 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/21 16:56:35 by jblack-b         ###   ########.fr       */
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
	if (min >= max)
		return (NULL);
	if (!(range = (int*)(malloc(sizeof(int) * (max - min)))))
		return (NULL);
	ft_fill_range(min, max, range);
	return (range);
}
