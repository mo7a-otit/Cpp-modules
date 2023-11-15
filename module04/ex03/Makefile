NAME = amateria
FILES = amateria.cpp main.cpp ice.cpp\
		cure.cpp character.cpp imateriasource.cpp 

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