# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otitebah <otitebah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 18:32:40 by otitebah          #+#    #+#              #
#    Updated: 2023/08/18 17:48:55 by otitebah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie
FILES = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(FILES:.cpp=.o)
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)
	
clean :
	rm -f $(NAME)

fclean : clean
	rm -f $(OBJ)

re : fclean all