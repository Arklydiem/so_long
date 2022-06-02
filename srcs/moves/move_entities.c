/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_entities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:06:27 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 22:34:52 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	move_up(t_game *g, t_entity *player, int key)
{
	if (able_to_move(g, player->y--, player->x) == 0)
		return ;
	reset_case(g, g->map->sentinel);
	reset_case(g, g->map->player);
	push_entity(g->map->sentinel, key);
	push_entity(g->map->player, key);
	if (player_on_sentinel(g->map->player, g->map->sentinel) == 1)
		clear_game(g);
	apply_case(g, g->map->sentinel, key);
	apply_case(g, g->map->player, key);
}

static void	move_down(t_game *g, t_entity *player, int key)
{
	if (able_to_move(g, player->y++, player->x) == 0)
		return ;
	reset_case(g, g->map->sentinel);
	reset_case(g, g->map->player);
	push_entity(g->map->sentinel, key);
	push_entity(g->map->player, key);
	if (player_on_sentinel(g->map->player, g->map->sentinel) == 1)
		clear_game(g);
	apply_case(g, g->map->sentinel, key);
	apply_case(g, g->map->player, key);
}

static void	move_left(t_game *g, t_entity *player, int key)
{
	if (able_to_move(g, player->y, player->x--) == 0)
		return ;
	reset_case(g, g->map->sentinel);
	reset_case(g, g->map->player);
	push_entity(g->map->sentinel, key);
	push_entity(g->map->player, key);
	if (player_on_sentinel(g->map->player, g->map->sentinel) == 1)
		clear_game(g);
	apply_case(g, g->map->sentinel, key);
	apply_case(g, g->map->player, key);
}

static void	move_right(t_game *g, t_entity *player, int key)
{
	if (able_to_move(g, player->y, player->x++) == 0)
		return ;
	reset_case(g, g->map->sentinel);
	reset_case(g, g->map->player);
	push_entity(g->map->sentinel, key);
	push_entity(g->map->player, key);
	if (player_on_sentinel(g->map->player, g->map->sentinel) == 1)
		clear_game(g);
	apply_case(g, g->map->sentinel, key);
	apply_case(g, g->map->player, key);
}

void	move_entities(int key, t_game *g)
{
	t_entity	*player;

	player = g->map->player;
	if (key == XK_Up || key == XK_w)
		move_up(g, player, key);
	else if (key == XK_Up || key == XK_w)
		move_down(g, player, key);
	else if (key == XK_Up || key == XK_w)
		move_left(g, player, key);
	else if (key == XK_Up || key == XK_w)
		move_right(g, player, key);
}
