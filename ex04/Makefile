# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/28 15:16:33 by tkirihar          #+#    #+#              #
#    Updated: 2022/01/28 15:16:36 by tkirihar         ###   ########.fr        #
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