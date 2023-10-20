NAME = BraiiiiiiinnnzzzZ
FILES = main.cpp Zombie.cpp newZombie.cpp\
		randomChump.cpp 

CFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
OBJ = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean
	rm -f $(OBJ)

re : fclean all 