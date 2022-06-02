# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: argomez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 16:56:39 by argomez           #+#    #+#              #
#    Updated: 2022/06/02 17:54:34 by argomez          ###   ########.fr        #
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
				change_matrix.c

INITS		=	game_init.c			\
				map_init.c			\

MAPS		=	map_inspector.c		\
				check_map_symbols.c	\

IMPORTS		=	import_images.c		\
				import_chars.c		\
				import_collects.c	\
				import_escapes.c	\
				import_numbers.c	\
				import_sentinels.c	\
				import_tiles.c		\
				import_walls.c		\

DISPLAYS	=	open_window.c		\
				print_images.c		\
				print_images_2.c	\
				move_player.c		\
				move_sentinel.c		\
				move_manipulations.c\
				print_chars_1.c		\
				print_chars_2.c		\
				print_escapes.c		\
				display_count.c		\

CLEARS		=	clear_game.c		\
				clear_images.c		\

SRCS		=	$(addprefix srcs/, $(SRC))					\
				$(addprefix srcs/inits/, $(INITS))			\
				$(addprefix srcs/maps/, $(MAPS))			\
				$(addprefix srcs/displays/, $(DISPLAYS))	\
				$(addprefix srcs/clears/, $(CLEARS))		\
				$(addprefix srcs/imports/, $(IMPORTS))		\

OBJ			=	$(SRCS:.c=.o)

LIBFT		=	libft/libft.a

all: $(NAME)

.c.o: $(SRCS)
	@ $(CC) $(CFLAGS) -c -o $@ $<

$(LIBFT):
	@ make -C libft --no-print-directory

libftfclean:
	@ make fclean -C libft --no-print-directory

clearing:
	@ clear

$(NAME): $(LIBFT)  $(OBJ)
	@ $(CC) $(CFLAGS) $(OBJ) -Lminilibx-linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz libft/libft.a -o $(NAME)
	$(display_compilation)

clean:
	@ $(RM) $(OBJ)
	$(display_clean)

fclean:	clearing libftfclean clean
	@ $(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
