/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:37:56 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/27 16:24:00 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long nbr;
	int sign;

	sign = 1;
	nbr = 0;
	while (*str == ' ' || *str == '\n'
	|| *str == '\t' || *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	if (nbr > 2147483647)
		return (-1);
	if (nbr < -2147483648)
		return (0);
	return ((int)(nbr * sign));
}
