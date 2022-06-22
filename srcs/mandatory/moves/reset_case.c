/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:22:42 by argomez           #+#    #+#             */
/*   Updated: 2022/06/07 18:01:43 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	reset_case_player(t_game *g, t_entity *e, char cell)
{
	if (cell == 'P')
		g->map->matrix[e->y][e->x] = '0';
	else if (cell == 'C')
		g->map->matrix[e->y][e->x] = '0';
	cell = g->map->matrix[e->y][e->x];
	if (cell == 'E')
		cell = '0';
	if (cell == '0')
		print_tiles(g, e->y + 1, e->x + 1, cell);
}

void	reset_case(t_game *g, t_entity *e)
{
	char	cell;

	cell = g->map->matrix[e->y][e->x];
	reset_case_player(g, e, cell);
}
