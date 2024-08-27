# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 19:33:55 by ashu              #+#    #+#              #
#    Updated: 2024/08/27 19:37:57 by ashu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isupper.c ft_islower.c
OBJS = $(SRCS:.c=.o)

TEST_DIR = test
TEST_SRCS = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_EXES = $(TEST_SRCS:.c=)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


$(TEST_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) -I. -c $< -o $@

$(TEST_DIR)/%: $(TEST_DIR)/%.o $(NAME)
	$(CC) -o $@ $< -L. -lft -I.

test: $(TEST_EXES)
	@for exe in $(TEST_EXES); do \
		echo "Running $$exe:"; \
		./$$exe; \
	done


clean:
	rm -f $(OBJS) $(TEST_OBJS) $(TEST_EXES)

fclean: clean
	rm -f $(NAME)

re: fclean all
