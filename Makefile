# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/19 01:26:01 by blopez-f          #+#    #+#              #
#    Updated: 2023/02/19 02:27:25 by blopez-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libftprintf.a
INCLUDES			= includes
SOURCES				= sources
OBJECTS				= objects
LIBRARIES			= libraries
TEST				= test

FTPRINTFT_SRC	= $(addprefix $(SOURCES)/,\
	   				ft_printf.c)
LIBFT_SRC		= $(addprefix $(SOURCES)/,\
	   				ft_putchar.c)

CFLAGS			=	-Wall -Wextra -Werror
IFLAGS			=	-Iincludes
MK				=	@mkdir -p
RM				=	@rm -rf
FILE			=	$(shell ls -lR sources/ | grep -F .c | wc -l)
CMP				=	1
CLEAR			=	@clear

ALL_SRCS	:=	ft_printf.c
SRCS		:=	$(ALL_SRCS:%=$(SOURCES)/%)
OBJS		:=	$(addprefix $(OBJECTS)/, $(SRCS:%.c=%.o))

all: $(LIBFT_NAME) $(NAME)

$(OBJS_DIR)/%.o: %.c
	$(MK) $(@D)
	@printf "\r$(LBLUE)[$(RESET)+$(LBLUE)] $(RESET)Adding $(GREEN)$<$(BLUE) [$(RESET)$(CMP)$(BLUE)/$(RESET)$(FILE)$(BLUE)]$(RESET)\n\r"
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	@$(eval CMP=$(shell echo $$(($(CMP)+1))))
	
$(LIBFT_NAME):
	@make -C $(LIBFT_PATH)

$(NAME): $(OBJS) 
	@ar rcsT $(NAME) $(OBJS) $(LIBFT_NAME)
	$(RNBW)

clean:
	@make clean -C $(LIBRARIES)
	$(RM) $(OBJECTS)

fclean: clean
	@make fclean -C $(LIBRARIES)
	$(RM) $(NAME)

re: fclean all


NO ESTA BIEN

