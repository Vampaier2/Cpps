NAME = PhoneBook

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PhoneBook.cpp Contact.cpp add.cpp search.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "Compiled $(NAME)"

$(OBJ): PhoneBook.hpp Contact.hpp

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
