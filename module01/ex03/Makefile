NAME = ex03
FILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(FILES:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all