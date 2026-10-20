NAME = Moar_brainz

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "Compiled $(NAME)"

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	@echo "!!!Cleaned!!!"

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
