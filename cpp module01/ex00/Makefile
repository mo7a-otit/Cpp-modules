# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 08:41:39 by otitebah          #+#    #+#              #
#    Updated: 2023/08/17 13:25:43 by otitebah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
FILES = main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp


CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = ${FILES:.cpp=.o}
CXX = clang++

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
