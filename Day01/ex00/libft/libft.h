/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:41:19 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/28 16:47:51 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDFT_H
# define LIBDFT_H
# include <string.h>

void			*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(const char *str);

#endif
