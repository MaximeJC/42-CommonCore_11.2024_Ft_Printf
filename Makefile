# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 15:43:54 by mgouraud          #+#    #+#              #
#    Updated: 2024/11/05 00:50:02 by mgouraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#! Variables

NAME		= libftprintf.a
INCLUDE	= include/
LIBFT_DIR	= libft/
OBJ_DIR		= obj/
SRC_DIR		= src/
AR		= ar rcs
CC		= gcc
CFLAGS	= -g -Wall -Wextra -Werror -I

#! Sources

SRC_FILES 		= ft_printf

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#! Make

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@echo "Libftprintf.a compiled!"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | obj_mkdir
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: $(NAME)

clean:
	make clean -C $(LIBFT_DIR)
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(LIBFT_DIR)libft.a
	rm -f $(NAME)

libft:
	make -C $(LIBFT_DIR)

obj_mkdir:
	@mkdir -p $(OBJ_DIR)

main: all
	$(CC) $(CFLAGS) $(INCLUDE) main.c $(NAME)

re: fclean all

.PHONY: all clean fclean libft main re
