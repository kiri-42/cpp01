# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkirihar <tkirihar@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 15:22:22 by tkirihar          #+#    #+#              #
#    Updated: 2022/01/27 15:24:25 by tkirihar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out

SRCS		= 	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

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