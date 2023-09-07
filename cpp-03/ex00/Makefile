NAME = Aaaaand...OPEN!

SRCS = main.cpp ClapTrap.cpp

HEADERS = ClapTrap.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

%.o: %cpp
	@ $(CC)  $(HEADERS) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)


clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all