NAME = Serializer
FILES = main.cpp Serializer.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address 
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