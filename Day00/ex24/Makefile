# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jblack-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 18:00:13 by jblack-b          #+#    #+#              #
#    Updated: 2018/11/20 18:09:03 by jblack-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/*.c

OUT = *.o

INCLUDES = includes/

all: 
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
			ar rc $(NAME) $(OUT)
				ranlib $(NAME)
clean:
	/bin/rm -f $(OUT)
fcleam:		clean
	/bin/rm -f $(NAME)
re: fclean all
