/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:30:02 by jblack-b          #+#    #+#             */
/*   Updated: 2018/12/03 14:48:46 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
 #include <xlocale.h>

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

void		ft_memcmp_check()
{
	char *s1 = "\xff\xaa\xde\x12";
	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	size_t size = 4;
	int i1 = memcmp(s1, s2, size);
	int i2 = ft_memcmp(s1, s2, size);
	printf("r:%d\nf:%d", i1, i2);
}

void		ft_strlcat_check()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t r1 = strlcat(buff1, str, max);
	size_t r2 = ft_strlcat(buff2, str, max);

	printf("r:%s %zu\nf:%s %zu\n ", buff1, r1, buff2, r2);
}

int		main()
{
	//ft_memcpy_check(17);
	//ft_memccpy_check();
	//ft_memcmp_check();
	//ft_strlcat_check();
//	printf("\n%d\n%d\n", ft_atoi("9223372036854775805"), atoi("9223372036854775805"));
//	printf("%s\n", ft_strtrim("   A   "));
//ft_strsplit("*hello*fellow***sdsa*", '*');
int c = L'ø';
ft_putchar(c);
	return (0);
}
