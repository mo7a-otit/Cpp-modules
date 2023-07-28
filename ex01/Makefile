# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otitebah <otitebah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 12:10:35 by otitebah          #+#    #+#              #
#    Updated: 2023/07/27 12:25:57 by otitebah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
FILES = main.cpp
CFLAGS = -Wall -Wextra -Werror
CC = c++
OBJ = ${FILES:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all