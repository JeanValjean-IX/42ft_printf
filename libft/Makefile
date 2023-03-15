# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blopez-f <blopez-f@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 19:14:47 by blopez-f          #+#    #+#              #
#    Updated: 2023/03/05 13:58:42 by blopez-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
INCLUDE_DIR	=	./
SOURCES_DIR	=	./
BUILD_DIR	=	build/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

SRC_FILES  = ft_memset \
			ft_isprint \
			ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_strlen \
			ft_memcpy \
			ft_memmove \
			ft_bzero \
			ft_strlcat \
			ft_strlcpy \
			ft_toupper \
			ft_tolower \
			ft_strchr \
			ft_strrchr \
			ft_strncmp \
			ft_memchr \
			ft_memcmp \
			ft_strnstr \
			ft_atoi \
			ft_calloc \
			ft_strdup \
			ft_substr \
			ft_strjoin \
			ft_strtrim \
			ft_split \
			ft_itoa \
			ft_strmapi \
			ft_striteri \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd

SRCS = $(addprefix $(SOURCES_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(BUILD_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJSF =	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@ranlib $(NAME)
			@echo "\n[INFO] libft.a library done!\n"

$(BUILD_DIR)%.o : $(SOURCES_DIR)%.c | $(OBJSF)
			@echo "Compiling (libft.a) ..... $<"
			@$(CC) $(CFLAGS) $(INCLUDE_DIR) -c $< -o $@

$(OBJSF):
			@mkdir -p $(BUILD_DIR)

clean:
			@$(RM) -rf $(BUILD_DIR)
			@$(RM) -f $(OBJSF)
			@echo "\n[INFO] libft objects files cleaned!\n"

fclean:		clean
			@$(RM) -f $(NAME)
			@echo "[INFO] libft executable files cleaned!\n"

re:			fclean all
			@echo "[INFO] Cleaned and rebuilt everything for libft library!\n"

norm:
	@norminette $(SOURCES_DIR) $(INCLUDE_DIR) | grep -v Norme -B1 || true
 
.PHONY:		all clean fclean re norm