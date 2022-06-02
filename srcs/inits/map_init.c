/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:38:00 by argomez           #+#    #+#             */
/*   Updated: 2022/06/01 10:51:31 by argomez          ###   ########.fr       */
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
	map->nb_escapes = 0;
	map->nb_collects = 0;
	map->count = 0;
	map->player = NULL;
}
