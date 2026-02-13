CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp ScalarConverter.cpp isValid.cpp
OBJCS = $(SRCS:.cpp=.o)

NAME = convert

all: $(NAME)

$(NAME): $(OBJCS) ScalarConverter.hpp
	$(CXX) $(CXXFLAGS) $(OBJCS) -o $@

clean:
	rm -rf $(OBJCS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re
