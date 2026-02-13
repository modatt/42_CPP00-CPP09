CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  main.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = ex01

all: $(NAME)
%.o:%.cpp 
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJCS) iter.hpp
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re