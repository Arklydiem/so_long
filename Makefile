# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: argomez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 16:56:39 by argomez           #+#    #+#              #
#    Updated: 2022/05/26 16:30:52 by argomez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

define display_compilation 
	@echo "\e[94m     *\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*"
	@echo "\e[34m     *                              \e[94m*"
	@echo "\e[94m     *     \e[96mCompilation Complete\e[0m     \e[34m*"
	@echo "\e[34m     *                              \e[94m*"
	@echo "\e[94m     *\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[0m"
endef

define display_clean 
	@echo "\e[94m     *\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*"
	@echo "\e[34m     *                              \e[94m*"
	@echo "\e[94m     *        \e[96mClean Complete        \e[34m*"
	@echo "\e[34m     *                              \e[94m*"
	@echo "\e[94m     *\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[94m*\e[34m*\e[0m"
endef


NAME		=	so_long

CC			=	gcc
CFLAGS		=	-g -Wall -Werror -Wextra
RM			=	rm -f

SRC			=	main.c				\
				errors.c			\
				clear_game.c		\

INITS		=	game_init.c			\
				map_init.c			\

MAPS		=	map_inspector.c		\
				check_map_symbols.c	\
				map_save_objects.c	\

SRCS		=	$(addprefix "srcs/", $(SRC))			\
				$(addprefix "srcs/inits/", $(INITS))	\
				$(addprefix "srcs/maps/", $(MAPS))		\

all: libftcompil $(NAME)

libftcompil:
	@ make -C libft --no-print-directory

libftfclean:
	@ make fclean -C libft --no-print-directory

clearing:
	@ clear

$(NAME):  $(OBJ)
	@ $(CC) $(CFLAGS) $(SRCS) -Lminilibx-linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz libft/libft.a -o $(NAME)
	$(display_compilation)

clean:
	@ $(RM) $(NAME)
	$(display_clean)

fclean:	clearing libftfclean clean
	@ $(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
