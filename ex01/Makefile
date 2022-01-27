# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 16:20:01 by tkirihar          #+#    #+#              #
#    Updated: 2022/01/27 16:21:46 by tkirihar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out

SRCS		=	main.cpp \
				Zombie.cpp \
				ZombieHorde.cpp

OBJS		= $(SRCS:.cpp=.o)

CPPC		= clang++

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPPC) $(CPPFLAGS) $^ -o $@

%.o:		%.cpp
			$(CPPC) $(CPPFLAGS) -c $< -o $@

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all