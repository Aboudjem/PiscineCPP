# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/03 14:58:40 by aboudjem          #+#    #+#              #
#    Updated: 2019/01/03 15:08:02 by aboudjem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = PhoneBook.cpp main.cpp
INC = PhoneBook.hpp
CFLAGS = -Wall -Werror -Wextra

all: PhoneBook

PhoneBook: $(OBJS) $(INC)
			@clang++ $(CFLAGS) $(SRC) -o $@
clean:
			@rm -f PhoneBook
re: clean all
