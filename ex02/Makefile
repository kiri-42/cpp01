# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 16:55:09 by tkirihar          #+#    #+#              #
#    Updated: 2022/01/27 17:10:04 by tkirihar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out

SRCS		= main.cpp

CPPC		= clang++

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CPPC) $(CPPFLAGS) $^ -o $@

fclean:
			rm -f $(NAME)

re:			fclean all