/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:52:08 by argomez           #+#    #+#             */
/*   Updated: 2022/05/26 16:33:34 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

//Other Includes
# include "../minilibx-linux/mlx.h"
# include "../libft/libft.h"

//Structures
typedef struct s_start
{
	int	x;
	int	y;
}	t_start;

typedef struct s_escape
{
	int	x;
	int	y;
}	t_escape;

typedef struct s_collect
{
	int	x;
	int	y;
}	t_collect;

typedef struct s_map
{
	char		*name;
	int			x;
	int			y;
	char		**matrix;
	int			nb_starts;
	t_start		*starts;
	int			nb_escapes;
	t_escape	*escapes;
	int			nb_collects;
	t_collect	*collects;

}	t_map;

typedef struct s_game
{
	t_map	*map;
}	t_game;

//Prototypes
void	ft_error(int error, t_game *game);

//Initialisation prototypes
void	game_init(t_game *game);
void	map_init(t_map *map);

//Clear prototypes
void	clear_game(t_game *game);

//Maps Prototypes
void	map_inspector(char **files, t_game *game);
void	check_map_symbols(char *line, int y, t_game *game);
void	map_save_objects(t_map *map, t_game *game);

#endif
