/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tiles.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:53:40 by argomez           #+#    #+#             */
/*   Updated: 2022/06/07 17:44:39 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_tiles(t_game *g, int y, int x, char c)
{
	t_img	*t;

	t = g->t;
	(void)c;
	mlx_put_image_to_window(g->mlx->m, g->mlx->w, t[0].i, x * 64, y * 64);
}
