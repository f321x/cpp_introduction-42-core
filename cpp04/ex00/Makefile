# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 17:38:38 by fbock             #+#    #+#              #
#    Updated: 2024/02/07 20:21:55 by fbock            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -Wshadow
NAME :=	Animals
INCLUDES := -I./includes
SRCS := src/main.cpp src/Animal.cpp src/Dog.cpp src/Cat.cpp src/WrongAnimal.cpp src/WrongCat.cpp

OBJS := $(SRCS:.cpp=.o)
all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
