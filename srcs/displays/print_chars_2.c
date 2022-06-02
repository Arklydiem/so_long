/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_chars_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:37:29 by argomez           #+#    #+#             */
/*   Updated: 2022/05/31 21:35:56 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_up_2(t_game *g, int y, int x, char c)
{
	t_img	*u;

	u = g->up;
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[6].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[7].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[8].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[9].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[10].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[11].i, x * 64, y * 64);
}

void	print_down_2(t_game *g, int y, int x, char c)
{
	t_img	*d;

	d = g->down;
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[6].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[7].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[8].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[9].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[10].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[11].i, x * 64, y * 64);
}

void	print_left_2(t_game *g, int y, int x, char c)
{
	t_img	*l;

	l = g->left;
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[6].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[7].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[8].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[9].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[10].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[11].i, x * 64, y * 64);
}

void	print_right_2(t_game *g, int y, int x, char c)
{
	t_img	*r;

	r = g->right;
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[6].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[7].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[8].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[9].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[10].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[11].i, x * 64, y * 64);
}
