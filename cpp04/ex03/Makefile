# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 17:38:38 by fbock             #+#    #+#              #
#    Updated: 2024/02/08 17:33:16 by fbock            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := clang++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -Wshadow -g3
NAME :=	materia
INCLUDES := -I./includes
SRCS := src/main.cpp src/AMateria.cpp src/Character.cpp src/Cure.cpp src/Ice.cpp src/MateriaSource.cpp
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
