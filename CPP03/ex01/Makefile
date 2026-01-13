CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.hpp ScavTrap.cpp
OBJCS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

NAME = scavTrap
all: $(NAME)

$(NAME): $(OBJCS)
	$(CC) $(CFLAGS) $^ -o $@
clean:
	rm -f $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re
