/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_images_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:53:05 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 18:55:00 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_start_end(t_game *g, int y, int x, char p)
{
	t_img	*u;
	t_img	*t;

	u = g->up;
	t = g->t;
	if (p == 'P')
	{
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[0].i, x * 64, y * 64);
		g->map->player->x = x;
		g->map->player->y = y;
		g->map->b = 1;
	}
	else if (p == 'E')
	{
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, t[3].i, x * 64, y * 64);
		g->map->ex = x;
		g->map->ey = y;
	}
}

static void	set_coords(t_game *g, t_entity *e)
{
	t_map 		*m;

	m = g->map;
	srand(time(NULL));
	e->x = 1;
	e->y = 1;
	while (!('2' <= m->matrix[e->y][e->x] && m->matrix[e->y][e->x] <= '7'))
	{
		e->y++;
		while (!('2' <= m->matrix[e->y][e->x] && m->matrix[e->y][e->x] <= '7'))
			e->x++;
	}
}

void	print_sentinel_1(t_game *g, int y, int x)
{
	char	c;
	t_img	*s;

	s = g->s;
	c = g->map->matrix[y - 1][x - 1];
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[0].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[1].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[2].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[3].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[4].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[5].i, x * 64, y * 64);
}

void	print_sentinel_2(t_game *g, int y, int x)
{
	char	c;
	t_img	*s;

	s = g->s;
	c = g->map->matrix[y - 1][x - 1];
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[6].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[7].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[8].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[9].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[10].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, s[11].i, x * 64, y * 64);
}

void	choose_sentinels(t_game *g)
{
	g->map->sentinel = malloc(sizeof(t_entity));
	set_coords(g, g->map->sentinel);
	ft_printf("Sentinel is on :\nx = %d\ny = %d", g->map->sentinel->x, g->map->sentinel->y);
	if (g->map->b == 1)
		print_sentinel_1(g, g->map->sentinel->y + 1, g->map->sentinel->x + 1);
	if (g->map->b == -1)
		print_sentinel_2(g, g->map->sentinel->y + 1, g->map->sentinel->x + 1);
}
