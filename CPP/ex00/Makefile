CC = g++
# clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = MegaPhone.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = megaphone

$(NAME): $(OBJCS)
	$(CC) $(CFLAGS) $^ -o $@

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME)

clean: 
	rm -rf $(OBJCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re