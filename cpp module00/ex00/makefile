# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 08:51:30 by otitebah          #+#    #+#              #
#    Updated: 2023/08/20 07:16:01 by otitebah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone
CFLAGS = -Wall -Wextra -Werror
FILES = megaphone.cpp
OBJ = ${FILES:.cpp=.o}
CXX = c++

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean  : clean
	rm -f $(NAME)

re : fclean all
