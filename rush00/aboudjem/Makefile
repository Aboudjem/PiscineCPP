
NAME = ft_retro
FLAG = #-Wall -Wextra -Werror
CC = clang++
SRCS := *.cpp


OBJS := $(SRCS:.cpp=.o)

all: $(NAME);

$(NAME): $(OBJS)
	   @$(CC) $^ $(FLAG) -o $(NAME)
	      @printf "Compilation done\n"

%.o: %.cpp
	   @$(CC) $< -c $(FLAG) -o $@

clean:
	   @rm -f *.o
fclean: clean
	   @rm -f $(NAME)
re: fclean all ;
