CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRCS = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp 
OBJCS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

NAME = brain
all: $(NAME)

$(NAME): $(OBJCS)
	$(CC) $(CFLAGS) $^ -o $@
clean:
	rm -f $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re
