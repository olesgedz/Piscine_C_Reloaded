/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:00:47 by jblack-b          #+#    #+#             */
/*   Updated: 2018/11/20 20:17:21 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "ft.h"
#include <stdlib.h>
#define BUF_SIZE 10

int		ft_put_error(char *str)
{
	write(2, str, ft_strlen(str));
	return (1);
}

int		ft_errors(int argc)
{
	if (argc < 2 && ft_put_error("File name missing.\n"))
		return (0);
	if (argc > 2 && ft_put_error("Too many arguments.\n"))
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_errors(argc) == 0)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1 && ft_put_error("open() error\n"))
		return (0);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1 && ft_put_error("close() error\n"))
		return (-1);
	return (0);
}
