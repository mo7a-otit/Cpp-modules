# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 12:10:35 by otitebah          #+#    #+#              #
#    Updated: 2023/08/20 10:07:56 by otitebah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
FILES = main.cpp\
			contact.cpp\
			phonebook.cpp

			
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g
CXX = c++
OBJ = ${FILES:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all