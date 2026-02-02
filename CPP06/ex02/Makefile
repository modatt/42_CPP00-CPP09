CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp Base.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = base

all: $(NAME)

$(NAME): $(OBJCS)
	$(CC) $(OBJCS) -o $@

clean:
	rm -rf $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re
