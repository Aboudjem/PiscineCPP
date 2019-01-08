# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/08 13:49:59 by aboudjem          #+#    #+#              #
#    Updated: 2019/01/08 13:50:03 by aboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
FLAG = -Wall -Wextra -Werror
CC = clang++
SRCS := megaphone.cpp

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
