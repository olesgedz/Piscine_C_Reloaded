/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:37:56 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/28 15:35:29 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_atoi_skip(const char **str, int *sign)
{
	while (**str == ' ' || **str == '\n'
	|| **str == '\t' || **str == '\r'
	|| **str == '\v' || **str == '\f' || **str == '0')
		(*str)++;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			*sign = -1;
		(*str)++;
	}
	while (**str == '0')
		(*str)++;
}

int		ft_atoi(const char *str)
{
	double nbr;
	int sign;
	int digits;

	sign = 1;
	nbr = 0;
	digits = 0;
	ft_atoi_skip(&str, &sign);
	while ('0' <= *str && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
		digits++;
	}
	nbr *= sign;
	if ((nbr > 2147483647 && digits == 9) || (digits > 10 && sign == 1))
		return (-1);
	if ((nbr < -2147483648 && digits == 9) || (digits > 10 && sign == -1))
		return (0);
	return ((int)(nbr));
}
