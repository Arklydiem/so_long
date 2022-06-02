/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sentinels.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:50:16 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 22:35:46 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_sentinel_up(t_game *g, t_entity *e, char cell)
{
	if (cell == '2')
		put_image_entity(g, g->s, e, 0);
	else if (cell == '3')
		put_image_entity(g, g->s, e, 1);
	else if (cell == '4')
		put_image_entity(g, g->s, e, 2);
	else if (cell == '5')
		put_image_entity(g, g->s, e, 3);
	else if (cell == '6')
		put_image_entity(g, g->s, e, 4);
	else if (cell == '7')
		put_image_entity(g, g->s, e, 5);
	else if (60 <= cell && cell <= 65)
		print_sentinel_up(g, e, cell - 10);
	else if (cell == 'E')
		print_sentinel_up(g, e, '5');
}

void	print_sentinel_down(t_game *g, t_entity *e, char cell)
{
	if (cell == '2')
		put_image_entity(g, g->s, e, 0);
	else if (cell == '3')
		put_image_entity(g, g->s, e, 1);
	else if (cell == '4')
		put_image_entity(g, g->s, e, 2);
	else if (cell == '5')
		put_image_entity(g, g->s, e, 3);
	else if (cell == '6')
		put_image_entity(g, g->s, e, 4);
	else if (cell == '7')
		put_image_entity(g, g->s, e, 5);
	else if (60 <= cell && cell <= 65)
		print_sentinel_down(g, e, cell - 10);
	else if (cell == 'E')
		print_sentinel_down(g, e, '5');
}

void	print_sentinel_left(t_game *g, t_entity *e, char cell)
{
	if (cell == '2')
		put_image_entity(g, g->s, e, 0);
	else if (cell == '3')
		put_image_entity(g, g->s, e, 1);
	else if (cell == '4')
		put_image_entity(g, g->s, e, 2);
	else if (cell == '5')
		put_image_entity(g, g->s, e, 3);
	else if (cell == '6')
		put_image_entity(g, g->s, e, 4);
	else if (cell == '7')
		put_image_entity(g, g->s, e, 5);
	else if (60 <= cell && cell <= 65)
		print_sentinel_left(g, e, cell - 10);
	else if (cell == 'E')
		print_sentinel_left(g, e, '5');
}

void	print_sentinel_right(t_game *g, t_entity *e, char cell)
{
	if (cell == '2')
		put_image_entity(g, g->s, e, 0);
	else if (cell == '3')
		put_image_entity(g, g->s, e, 1);
	else if (cell == '4')
		put_image_entity(g, g->s, e, 2);
	else if (cell == '5')
		put_image_entity(g, g->s, e, 3);
	else if (cell == '6')
		put_image_entity(g, g->s, e, 4);
	else if (cell == '7')
		put_image_entity(g, g->s, e, 5);
	else if (60 <= cell && cell <= 65)
		print_sentinel_right(g, e, cell - 10);
	else if (cell == 'E')
		print_sentinel_right(g, e, '5');
}
