/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:30:02 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/22 20:13:17 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "./libft/ft_memcpy.c"
#include "./libft/ft_memccpy.c"


void		ft_memcpy_check(int n)
{
	char a[] = "segfaulter tu dois";
	char b[0];
	char c[0];
	ft_memcpy(b, a, n);
	memcpy(c, a, n);
	printf("f:%s\nr:%s\n", b, c);
}

void		ft_memccpy_check()
{
	char src[] = "test basic du memccpy !";
	char buff1[22];
	char buff2[22];
	printf("%c\n", *(char*)ft_memccpy(buff1, src, 'm', 22));
	printf("%c\n", *(char*)memccpy(buff2, src, 'm', 22));
	printf("f:%s\nr:%s\n", buff1, buff2);

}

int		main()
{
	//ft_memcpy_check(17);
	ft_memccpy_check();
	return (0);
}
