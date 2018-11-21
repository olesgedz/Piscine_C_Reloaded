/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:05:03 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/21 21:27:03 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memset.c"

int		main(void)
{
	char *str1;
	char *str2;

	memset(str1, 65, 3);
	printf("r:%s\n", str1);
	ft_memset(str2, 65, 3);
	printf("f:%s\n", str2);
	return (0);
}
