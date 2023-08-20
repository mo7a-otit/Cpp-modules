NAME = human
FILES = HumanB.cpp HumanA.cpp main.cpp Weapon.cpp
OBJ = ${FILES:.cpp=.o}
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

