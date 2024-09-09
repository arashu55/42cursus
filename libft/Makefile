# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 19:33:55 by ashu              #+#    #+#              #
#    Updated: 2024/09/10 01:20:19 by ashu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isupper.c ft_islower.c ft_isascii.c ft_isprint.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

TEST_DIR = test
TEST_SRCS = $(filter-out $(TEST_DIR)/display_banner.c, $(wildcard $(TEST_DIR)/*.c))
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_EXES = $(TEST_SRCS:.c=)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(TEST_DIR)/%.o: $(TEST_DIR)/%.c
	@$(CC) -I. -c $< -o $@

$(TEST_DIR)/%: $(TEST_DIR)/%.o $(NAME)
	$(CC) -o $@ $< -L. $(NAME) -I.

display_banner: $(TEST_DIR)/display_banner.o $(NAME)
	@$(CC) -o $(TEST_DIR)/display_banner $(TEST_DIR)/display_banner.o -L. -lft -I.

test: $(NAME) display_banner $(TEST_EXES)
	@./$(TEST_DIR)/display_banner
	@for exe in $(TEST_EXES); do \
		echo "Running $$exe:"; \
		./$$exe; \
	done

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(TEST_EXES) $(TEST_DIR)/display_banner.o $(TEST_DIR)/display_banner

fclean: clean
	rm -f $(NAME)

re: fclean all
