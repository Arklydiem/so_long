/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_chars_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:37:29 by argomez           #+#    #+#             */
/*   Updated: 2022/05/31 21:35:37 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_up_1(t_game *g, int y, int x, char c)
{
	t_img	*u;

	u = g->up;
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[0].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[1].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[2].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[3].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[4].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, u[5].i, x * 64, y * 64);
}

void	print_down_1(t_game *g, int y, int x, char c)
{
	t_img	*d;

	d = g->down;
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[0].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[1].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[2].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[3].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[4].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, d[5].i, x * 64, y * 64);
}

void	print_left_1(t_game *g, int y, int x, char c)
{
	t_img	*l;

	l = g->left;
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[0].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[1].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[2].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[3].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[4].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, l[5].i, x * 64, y * 64);
}

void	print_right_1(t_game *g, int y, int x, char c)
{
	t_img	*r;

	r = g->right;
	if (c == '2')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[0].i, x * 64, y * 64);
	else if (c == '3')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[1].i, x * 64, y * 64);
	else if (c == '4')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[2].i, x * 64, y * 64);
	else if (c == '5')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[3].i, x * 64, y * 64);
	else if (c == '6')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[4].i, x * 64, y * 64);
	else if (c == '7')
		mlx_put_image_to_window(g->mlx->m, g->mlx->w, r[5].i, x * 64, y * 64);
}
