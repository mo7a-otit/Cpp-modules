NAME = brain
FILES = main.cpp

OBJ = ${FILES:.cpp=.o}
CFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -f $(NAME)

fclean : clean
	rm -f $(OBJ)

re : fclean all