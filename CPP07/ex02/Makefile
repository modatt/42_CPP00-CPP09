CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =  main.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = ex02

all: $(NAME)
%.o:%.cpp Array.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJCS) 
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re