# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 14:26:28 by ***REMOVED***             #+#    #+#              #
#    Updated: 2024/01/23 13:50:25 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
NAME :=	triangles_TRIANGLES_trIAangleS
INCLUDES := -I./includes
SRCS := src/main.cpp src/Fixed.cpp src/Point.cpp src/bsp.cpp

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
