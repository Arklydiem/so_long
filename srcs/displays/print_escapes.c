/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_escapes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:23:10 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 15:47:46 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

static void	print_escape_1(t_game *g, int y, int x)
{
	t_img	*e;

	e = g->e;
	x = g->map->ex;
	y = g->map->ey;
	mlx_put_image_to_window(g->mlx->m, g->mlx->w, e[0].i, x * 64, y * 64);
}

static void	print_escape_2(t_game *g, int y, int x)
{
	t_img	*e;

	e = g->e;
	x = g->map->ex;
	y = g->map->ey;
	mlx_put_image_to_window(g->mlx->m, g->mlx->w, e[1].i, x * 64, y * 64);
}

void	print_escape(t_game *g, int y, int x, int b)
{
	if (b == 1)
		print_escape_1(g, y, x);
	else if (b == -1)
		print_escape_2(g, y, x);
		
}
