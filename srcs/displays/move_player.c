/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:21:47 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 18:52:32 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	move_up(t_game *g, int x, int y, int key)
{
	if (g->map->matrix[y - 1][x] == '1')
		return ;
	move_sentinel(g);
	delcase(g, x, y--);
	newchar(g, x, y, key);
	g->map->player->y--;
	display_count(g, ++g->map->count);
	if (g->map->matrix[y][x] == 'E' && g->map->nb_collects == 0)
		clear_game(g);
}

static void	move_down(t_game *g, int x, int y, int key)
{
	if (g->map->matrix[y + 1][x] == '1')
		return ;
	move_sentinel(g);
	delcase(g, x, y++);
	newchar(g, x, y, key);
	g->map->player->y++;
	display_count(g, ++g->map->count);
	if (g->map->matrix[y][x] == 'E' && g->map->nb_collects == 0)
		clear_game(g);
}

static void	move_left(t_game *g, int x, int y, int key)
{
	if (g->map->matrix[y][x - 1] == '1')
		return ;
	move_sentinel(g);
	delcase(g, x--, y);
	newchar(g, x, y, key);
	g->map->player->x--;
	display_count(g, ++g->map->count);
	if (g->map->matrix[y][x] == 'E' && g->map->nb_collects == 0)
		clear_game(g);
}

static void	move_right(t_game *g, int x, int y, int key)
{
	if (g->map->matrix[y][x + 1] == '1')
		return ;
	move_sentinel(g);
	delcase(g, x++, y);
	newchar(g, x, y, key);
	g->map->player->x++;
	display_count(g, ++g->map->count);
	if (g->map->matrix[y][x] == 'E' && g->map->nb_collects == 0)
		clear_game(g);
}

void	move_player(int key, t_game *g)
{
	int	x;
	int	y;

	y = g->map->player->y - 1;
	x = g->map->player->x - 1;
	if (key == XK_w || key == XK_Up)
		move_up(g, x, y, key);
	else if (key == XK_s || key == XK_Down)
		move_down(g, x, y, key);
	else if (key == XK_a || key == XK_Left)
		move_left(g, x, y, key);
	else if (key == XK_d || key == XK_Right)
		move_right(g, x, y, key);
}
