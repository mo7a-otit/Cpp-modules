NAME = amateria
FILES = main.cpp amateria.cpp ice.cpp icharacter.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
CXX = c++
OBJ = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all 