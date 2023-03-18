# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 16:52:28 by blopez-f          #+#    #+#              #
#    Updated: 2023/03/18 22:25:00 by blopez-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a
SOURCES_DIR	= ./sources/
BUILD_DIR	= ./build/
INCLUDE_DIR = ./includes
TEST_DIR	= ./test
LIBFT_DIR	= ./libft/
LIBFT 		= $(LIBFT_DIR)/libft.a
CC			= gcc
CFLAGS 		= -Wall -Werror -Wextra
RM			= rm -f
AR			= ar rcs

SRC_FILES	= ft_printf \
			ft_printf_arguments \
			ft_printf_printer \
			ft_printf_printer_c \
			ft_printf_printer_s \
			ft_printf_printer_u \
			ft_printf_printer_i \
			ft_printf_printer_d \
			ft_printf_printer_x \
			ft_printf_printer_p

SRCS = $(addprefix $(SOURCES_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(BUILD_DIR), $(addsuffix .o, $(SRC_FILES)))

all: $(NAME)

$(NAME):  $(LIBFT) $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "\n[INFO] libftprintf.a library done!"

$(BUILD_DIR)%.o : $(SOURCES_DIR)%.c | $(OBJSF)
	@mkdir -p $(@D)
	@echo "Compiling (libftprintf.a) ..... $<"
	@$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -I $(LIBFT_DIR) -c $< -o $@

$(OBJSF):
			@mkdir -p $(BUILD_DIR)

$(LIBFT):
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/libft.h $(INCLUDE_DIR)
	@cp $(LIBFT) $(NAME)

clean:
	@make clean -C $(LIBFT_DIR)
	@$(RM) $(INCLUDE_DIR)/libft.h
	@$(RM) -r $(BUILD_DIR)
	@echo "\n[INFO] libftprintf objects files cleaned!\n"

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME)
	@echo "[INFO] libftprintf executable files cleaned!\n"

re: fclean all
	@echo "[INFO] Cleaned and rebuilt everything for libftprintf library!\n"

test: re
	@$(CC) $(TEST_DIR)/test.c -lftprintf -L . -I $(INCLUDE_DIR) -o test.out
	@echo "\033[0;32m=== RUNNER ===\033[0m"
	@./test.out

testmem: re
		@$(CC) $(TEST_DIR)/test.c -lftprintf -L . -I $(INCLUDE_DIR) -o test.out
	@echo "\033[0;32m=== RUNNER ===\033[0m"
	@valgrind -q --leak-check=full --track-origins=yes ./test.out
	
.PHONY: all clean fclean re