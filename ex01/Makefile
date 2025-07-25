NAME = moar_brainz
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
SRC = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all
