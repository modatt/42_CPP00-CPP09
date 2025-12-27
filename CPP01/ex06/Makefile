CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Harl.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = harl

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
$(NAME): $(OBJCS)
	$(CC) $(CFLAGS) $^ -o $@
clean:
	rm -f $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re