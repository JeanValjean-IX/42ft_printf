# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/19 01:26:01 by blopez-f          #+#    #+#              #
#    Updated: 2023/02/19 22:18:24 by blopez-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBS_PATH	= libraries
SRCS_PATH	= sources
LIBFT_PATH	= sources/libft
INCS_PATH	= includes
OBJS_PATH	= objects
TEST_PATH	= test

NAME	= $(LIBS_PATH)/libftprintf.a
LIBFT	= $(LIBS_PATH)/libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar
ARFLAGS	= rcs
RM		= rm -rf

SRCS	= $(SRCS_PATH)/ft_printf.c
OBJS	= $(SRCS:%.c=$(OBJ_DIR)/%.o)

$(OBJS_PATH)/%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

all:				
	$(NAME)

bonus:
	all

$(NAME):
	$(LIBFT) $(OBJS_PATH) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_PATH) all

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJS_PATH)

fclean:				
	clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re:
	fclean all

.PHONY:
	all bonus clean fclean re libft