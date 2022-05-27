/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_save_objects.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:24:10 by argomez           #+#    #+#             */
/*   Updated: 2022/05/26 16:33:49 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	map_save_objects(t_map *map, t_game *game)
{
	map->starts = malloc((map->nb_starts + 1) * sizeof(t_start));
	map->escapes = malloc((map->nb_escapes + 1) * sizeof(t_escape));
	map->collects = malloc((map->nb_collects + 1) * sizeof(t_collect));
	(void)game;
}
