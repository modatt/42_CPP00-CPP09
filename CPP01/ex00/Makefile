CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = memory

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
.PHONY: all fclean clean re

