# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otitebah <otitebah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 08:51:30 by otitebah          #+#    #+#              #
#    Updated: 2023/07/25 08:51:31 by otitebah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone
CFLAGS = -Wall -Wextra -Werror
FILES = megaphone.cpp
OBJ = ${FILES:.cpp=.o}
CC = c++

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean  : clean
	rm -f $(NAME)

re : fclean all
