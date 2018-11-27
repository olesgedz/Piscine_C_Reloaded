/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:41:19 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/27 16:09:02 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBDFT_H
# define LIBDFT_H
# include <string.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(const char *str);

#endif
