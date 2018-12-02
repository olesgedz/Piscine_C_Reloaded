/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:41:19 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/30 20:45:43 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
int				ft_strlen(char *str);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(const char *str);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			ft_striter(char *s, void(*f)(char*));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);

#endif
