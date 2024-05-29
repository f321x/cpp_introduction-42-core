CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
NAME :=	maggots
INCLUDES := -I./includes
SRCS := srcs/main.cpp srcs/Bureaucrat.cpp srcs/Form.cpp

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
