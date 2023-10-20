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