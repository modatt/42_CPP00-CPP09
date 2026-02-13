CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp Serializer.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = convert

all: $(NAME)

$(NAME): $(OBJCS) Serializer.hpp
	$(CXX) $(CXXFLAGS) $(OBJCS) -o $@

clean:
	rm -rf $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re
