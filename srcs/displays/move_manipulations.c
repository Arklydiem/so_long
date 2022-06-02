/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_manipulations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:00:27 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 15:47:01 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	delcase(t_game *g, int x, int y)
{
	char	c;

	if (g->map->matrix[y][x] == 'P')
		g->map->matrix[y][x] = '2';
	c = g->map->matrix[y][x];
	if (c == 'E')
		c -= 16;
	if ('2' <= c && c <= '7')
		print_tiles(g, y + 1, x + 1, c);
}

static void	print_bool_1(t_game *g, int x, int y, int key)
{
	char	c;

	c = g->map->matrix[y][x];
	if (('2' <= c && c <= '7') || (60 <= c && c <= 65) || c == 'E')
	{
		if (c == 'E')
			c -= 16;
		if (60 <= c && c <= 65)
		{
			g->map->nb_collects--;
			c -= 10;
			g->map->matrix[y][x] = c;
		}
		x++;
		y++;
		if (key == XK_w || key == XK_Up)
			print_up_1(g, y, x, c);
		else if (key == XK_s || key == XK_Down)
			print_down_1(g, y, x, c);
		else if (key == XK_a || key == XK_Left)
			print_left_1(g, y, x, c);
		else if (key == XK_d || key == XK_Right)
			print_right_1(g, y, x, c);
	}
}

static void	print_bool_2(t_game *g, int x, int y, int key)
{
	char	c;

	c = g->map->matrix[y][x];
	if (('2' <= c && c <= '7') || (60 <= c && c <= 65) || c == 'E')
	{
		if (c == 'E')
			c -= 16;
		if (60 <= c && c <= 65)
		{
			g->map->nb_collects--;
			c -= 10;
			g->map->matrix[y][x] = c;
		}
		x++;
		y++;
		if (key == XK_w || key == XK_Up)
			print_up_2(g, y, x, c);
		else if (key == XK_s || key == XK_Down)
			print_down_2(g, y, x, c);
		else if (key == XK_a || key == XK_Left)
			print_left_2(g, y, x, c);
		else if (key == XK_d || key == XK_Right)
			print_right_2(g, y, x, c);
	}
}

void	newchar(t_game *g, int x, int y, int key)
{
	if (g->map->b == 1)
	{
		g->map->b *= -1;
		print_bool_1(g, x, y, key);
	}
	else
	{
		g->map->b *= -1;
		print_bool_2(g, x, y, key);
	}
	if (g->map->nb_collects == 0)
		print_escape(g, y + 1, x + 1, g->map->b);
}
