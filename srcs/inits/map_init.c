/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:38:00 by argomez           #+#    #+#             */
/*   Updated: 2022/05/26 16:21:29 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	map_init(t_map *map)
{
	map->name = NULL;
	map->x = 0;
	map->y = 0;
	map->matrix = NULL;
	map->nb_starts = 0;
	map->starts = NULL;
	map->nb_escapes = 0;
	map->escapes = NULL;
	map->nb_collects = 0;
	map->collects = NULL;
}
