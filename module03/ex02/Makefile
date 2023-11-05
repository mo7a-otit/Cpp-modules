NAME = ScavTrap
FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
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