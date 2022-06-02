/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_images.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:15:41 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 17:53:09 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	print_trees(t_game *g, int y, int x)
{
	t_img	*w;
	int		random;

	w = g->w;
	random = (int)(rand() / (double)RAND_MAX * (4 - 1));
	if (random == 0)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[8].i, x * 64, y * 64);
	if (random == 1)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[9].i, x * 64, y * 64);
	if (random == 2)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[10].i, x * 64, y * 64);
	if (random == 3)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[11].i, x * 64, y * 64);
}

static void	print_walls(t_game *g, int y, int x)
{
	t_img	*w;

	w = g->w;
	if (y == 1 && x == 1)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[0].i, x * 64, y * 64);
	else if (y == 1 && x == g->map->x)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[1].i, x * 64, y * 64);
	else if (y == g->map->y && x == 1)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[2].i, x * 64, y * 64);
	else if (y == g->map->y && x == g->map->x)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[3].i, x * 64, y * 64);
	else if (y == 1)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[4].i, x * 64, y * 64);
	else if (y == g->map->y)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[7].i, x * 64, y * 64);
	else if (x == 1)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[5].i, x * 64, y * 64);
	else if (x == g->map->x)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, w[6].i, x * 64, y * 64);
	else
		print_trees(g, y, x);
}

void	print_tiles(t_game *g, int y, int x, char c)
{
	t_img	*t;

	t = g->t;
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, t[0].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, t[1].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, t[2].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, t[3].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, t[4].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, t[5].i, x * 64, y * 64);
}

void	print_collects(t_game *g, int y, int x, char p)
{
	t_img	*c;

	c = g->c;
	if (p == 60)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, c[0].i, x * 64, y * 64);
	else if (p == 61)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, c[1].i, x * 64, y * 64);
	else if (p == 62)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, c[2].i, x * 64, y * 64);
	else if (p == 63)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, c[3].i, x * 64, y * 64);
	else if (p == 64)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, c[4].i, x * 64, y * 64);
	else if (p == 65)
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, c[5].i, x * 64, y * 64);
}

void	print_images(t_game *game)
{
	t_map	*m;
	int		y;
	int		x;

	srand(time(NULL));
	y = -1;
	m = game->map;
	game->map->player = malloc(sizeof(t_entity));
	while (++y < game->map->y)
	{
		x = -1;
		while (++x < game->map->x)
		{
			if (m->matrix[y][x] == '1')
				print_walls(game, y + 1, x + 1);
			else if (m->matrix[y][x] >= 50 && m->matrix[y][x] <= 55)
				print_tiles(game, y + 1, x + 1, m->matrix[y][x]);
			else if (m->matrix[y][x] >= 60 && m->matrix[y][x] <= 65)
				print_collects(game, y + 1, x + 1, m->matrix[y][x]);
			else if (m->matrix[y][x] == 'P' || m->matrix[y][x] == 'E')
				print_start_end(game, y + 1, x + 1, m->matrix[y][x]);
		}
	}
	choose_sentinels(game);
}
