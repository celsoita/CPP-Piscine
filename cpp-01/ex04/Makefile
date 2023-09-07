NAME = SedIsForLosers

SRCS = main.cpp

#HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

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