/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:45:16 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/19 20:43:56 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_half(int nb)
{
	int half;

	half = 1;
	while (nb >= half * half)
	{
		if (nb == half * half)
			return (half);
		half *= 2;
	}
	return (0);
}

int		ft_sqrt(int nb)
{
	int result;

	result = ft_find_half(nb);
	while (result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
