/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:51:44 by argomez           #+#    #+#             */
/*   Updated: 2022/05/26 16:36:41 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	clear_matrix(t_map *map)
{
	int	i;

	i = -1;
	while (map->matrix[++i] != NULL)
		free(map->matrix[i]);
	free(map->matrix);
}

static void	clear_map(t_map *map)
{
	free(map->name);
	if (map->matrix)
		clear_matrix(map);
	free(map->starts);
	free(map->escapes);
	free(map->collects);
	free(map);
}

void	clear_game(t_game *game)
{
	if (game->map)
		clear_map(game->map);
	free(game);
	exit(0);
}
