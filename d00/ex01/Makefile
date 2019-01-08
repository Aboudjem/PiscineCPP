# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/08 13:50:16 by aboudjem          #+#    #+#              #
#    Updated: 2019/01/08 13:50:19 by aboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
FLAG = -Wall -Wextra -Werror
CC = clang++
SRCS := PhoneBook.cpp \
	    main.cpp \
	    handleUsers.cpp \


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
