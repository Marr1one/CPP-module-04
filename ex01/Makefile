# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <root@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/01 16:31:48 by root              #+#    #+#              #
#    Updated: 2025/08/01 17:43:16 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

SRC = Cat.cpp Dog.cpp Animal.cpp main.cpp Brain.cpp

CFLAGS =  -Wall -Werror -Wextra -std=c++98 -g

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean $(NAME)

.PHONY : 
	re clean all fclean