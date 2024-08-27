# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 19:33:55 by ashu              #+#    #+#              #
#    Updated: 2024/08/27 19:09:31 by ashu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isupper.c ft_islower.c
OBJS = $(SRCS:.c=.o)

TEST_DIR = test
TEST_SRCS = $(TEST_DIR)/test_isalpha.c $(TEST_DIR)/test_isdigit.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

test: $(NAME) $(TEST_OBJS)
	cc -o test_isalpha $(TEST_DIR)/test_isalpha.o -L. -lft -I.
	cc -o test_isdigit $(TEST_DIR)/test_isdigit.o -L. -lft -I.
	echo "Running test_isalpha:"
	./test_isalpha
	echo "Running test_isdigit:"
	./test_isdigit
	
clean:
	rm -f $(OBJS) $(TEST_OBJS)

fclean: clean
	rm -f $(NAME)
