/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:52:08 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 21:26:17 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

//Other Includes
# include "../minilibx-linux/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <time.h>
# include "../libft/libft.h"

//Structures
typedef struct s_entity
{
	int	x;
	int	y;
}	t_entity;

typedef struct s_sentinel
{
	int	x;
	int	y;
	int	state;
}	t_sentinel;

typedef struct s_map
{
	char		*name;
	int			x;
	int			y;
	char		**matrix;
	int			nb_starts;
	int			nb_escapes;
	int			nb_collects;
	t_entity	*player;
	t_entity	*sentinel;
	int			count;
	int	b;
	int	ex;
	int	ey;
}	t_map;

typedef struct s_mlx
{
	void	*m;
	void	*w;
}	t_mlx;

typedef struct s_img
{
	void	*i;
	char	*p;
	int		w;
	int		h;
}	t_img;

typedef struct s_game
{
	t_map	*map;
	t_mlx	*mlx;
	t_img	*w;
	t_img	*t;
	t_img	*c;
	t_img	*e;
	t_img	*left;
	t_img	*up;
	t_img	*right;
	t_img	*down;
	t_img	*n;
	t_img	*s;
}	t_game;

//Prototypes
void	ft_error(int error, t_game *game);

//Initialisation prototypes
void	game_init(t_game *game);
void	map_init(t_map *map);

//Clear prototypes
void	clear_game(t_game *game);
void	clear_images(t_game *game);

//Maps Prototypes
void	map_inspector(char **files, t_game *game);
void	check_map_symbols(char *line, int y, t_game *game);
void	change_matrix(t_game *g);

//Import_images
void	import_images(t_game *g);
void	import_chars(t_game *g);
void	import_collects(t_game *g);
void	import_escapes(t_game *g);
void	import_numbers(t_game *g);
void	import_sentinels(t_game *g);
void	import_tiles(t_game *g);
void	import_walls(t_game *g);

//Displays Prototypes
void	open_window(t_game *game);
void	print_images(t_game *game);
void	print_start_end(t_game *g, int y, int x, char c);
void	move_player(int key, t_game *g);
void	move_sentinel(t_game *g);
void	print_tiles(t_game *g, int y, int x, char c);
void	print_collects(t_game *g, int y, int x, char c);
void	delcase(t_game *g, int x, int y);
void	newchar(t_game *g, int x, int y, int key);
void	print_up_1(t_game *g, int y, int x, char c);
void	print_down_1(t_game *g, int y, int x, char c);
void	print_left_1(t_game *g, int y, int x, char c);
void	print_right_1(t_game *g, int y, int x, char c);
void	print_up_2(t_game *g, int y, int x, char c);
void	print_down_2(t_game *g, int y, int x, char c);
void	print_left_2(t_game *g, int y, int x, char c);
void	print_right_2(t_game *g, int y, int x, char c);
void	print_escape(t_game *g, int y, int x, int b);
void	display_count(t_game *g, int count);
void	choose_sentinels(t_game *g);
void	print_sentinel_1(t_game *g, int y, int x);
void	print_sentinel_2(t_game *g, int y, int x);

#endif
