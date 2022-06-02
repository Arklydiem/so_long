/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:37:00 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 22:34:37 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	apply_sentinel(t_game *g, t_entity *e, int key)
{
	if (key == XK_Up || key == XK_w)
		print_sentinel_up(g, e, g->map->matrix[e->y][e->x]);
	else if (key == XK_Down || key == XK_s)
		print_sentinel_down(g, e, g->map->matrix[e->y][e->x]);
	else if (key == XK_Left || key == XK_a)
		print_sentinel_left(g, e, g->map->matrix[e->y][e->x]);
	else if (key == XK_Right || key == XK_d)
		print_sentinel_right(g, e, g->map->matrix[e->y][e->x]);
}

void	apply_case(t_game *g, t_entity *e, int key)
{
	if (e->state == -1)
		apply_sentinel(g, e, key);
	else if (e->state == 1)
		apply_player(g, e, key);
}
