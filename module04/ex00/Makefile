NAME = Animals
FILES = main.cpp Dog.cpp Animal.cpp Cat.cpp 
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CXX = c++
OBJ = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all 