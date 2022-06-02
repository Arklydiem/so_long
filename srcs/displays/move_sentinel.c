/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sentinel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:30:18 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 18:43:05 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	move_up(t_game *g)
{
	t_entity 	*s;
	char		c;

	s = g->map->sentinel;
	if (g->map->matrix[s->y - 1][s->x] == '1')
	{
		move_sentinel(g);
		srand(time(NULL));
		return ;
	}
	srand(time(NULL));
	c = g->map->matrix[s->y][s->x];
	if (60 <= c && c <= 65)
		print_collects(g, s->y + 1, s->x + 1, c);
	if ('2' <= c && c <= '7')
		print_tiles(g, s->y + 1, s->x + 1, c);
	s->y--;
	if (g->map->b == 1)
		print_sentinel_1(g, s->y + 1, s->x + 1);
	else if (g->map->b == -1)
		print_sentinel_1(g, s->y + 1, s->x + 1);
}

static void	move_down(t_game *g)
{
	t_entity 	*s;
	char		c;

	s = g->map->sentinel;
	if (g->map->matrix[s->y + 1][s->x] == '1')
	{
		move_sentinel(g);
		srand(time(NULL));
		return ;
	}
	c = g->map->matrix[s->y][s->x];
	if (60 <= c && c <= 65)
		print_collects(g, s->y + 1, s->x + 1, c);
	if ('2' <= c && c <= '7')
		print_tiles(g, s->y + 1, s->x + 1, c);
	s->y++;
	if (g->map->b == 1)
		print_sentinel_1(g, s->y + 1, s->x + 1);
	else if (g->map->b == -1)
		print_sentinel_1(g, s->y + 1, s->x + 1);
}

static void	move_left(t_game *g)
{
	t_entity 	*s;
	char		c;

	s = g->map->sentinel;
	if (g->map->matrix[s->y][s->x - 1] == '1')
	{
		move_sentinel(g);
		srand(time(NULL));
		return ;
	}
	c = g->map->matrix[s->y][s->x];
	if (60 <= c && c <= 65)
		print_collects(g, s->y + 1, s->x + 1, c);
	if ('2' <= c && c <= '7')
		print_tiles(g, s->y + 1, s->x + 1, c);
	s->x--;
	if (g->map->b == 1)
		print_sentinel_1(g, s->y + 1, s->x + 1);
	else if (g->map->b == -1)
		print_sentinel_1(g, s->y + 1, s->x + 1);
}

static void	move_right(t_game *g)
{
	t_entity 	*s;
	char		c;

	s = g->map->sentinel;
	if (g->map->matrix[s->y][s->x + 1] == '1')
	{
		move_sentinel(g);
		srand(time(NULL));
		return ;
	}
	c = g->map->matrix[s->y][s->x];
	if (60 <= c && c <= 65)
		print_collects(g, s->y + 1, s->x + 1, c);
	if ('2' <= c && c <= '7')
		print_tiles(g, s->y + 1, s->x + 1, c);
	s->x++;
	if (g->map->b == 1)
		print_sentinel_1(g, s->y + 1, s->x + 1);
	else if (g->map->b == -1)
		print_sentinel_1(g, s->y + 1, s->x + 1);
}

void	move_sentinel(t_game *g)
{
	int	move;

	move = (int)(rand() / (double)RAND_MAX * (3));
	if (move == 0)
		move_up(g);
	else if (move == 1)
		move_down(g);
	else if (move == 2)
		move_left(g);
	else if (move == 3)
		move_right(g);
}
