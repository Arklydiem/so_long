/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_players.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:50:16 by argomez           #+#    #+#             */
/*   Updated: 2022/06/02 22:26:29 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_player_up(t_game *g, t_entity *e, char cell)
{
	if (cell == '2')
		put_image_entity(g, g->up, e, 0);
	else if (cell == '3')
		put_image_entity(g, g->up, e, 1);
	else if (cell == '4')
		put_image_entity(g, g->up, e, 2);
	else if (cell == '5')
		put_image_entity(g, g->up, e, 3);
	else if (cell == '6')
		put_image_entity(g, g->up, e, 4);
	else if (cell == '7')
		put_image_entity(g, g->up, e, 5);
	else if (60 <= cell && cell <= 65)
		print_player_up(g, e, cell - 10);
	else if (cell == 'E')
		print_player_up(g, e, '5');
}

void	print_player_down(t_game *g, t_entity *e, char cell)
{
	if (cell == '2')
		put_image_entity(g, g->down, e, 0);
	else if (cell == '3')
		put_image_entity(g, g->down, e, 1);
	else if (cell == '4')
		put_image_entity(g, g->down, e, 2);
	else if (cell == '5')
		put_image_entity(g, g->down, e, 3);
	else if (cell == '6')
		put_image_entity(g, g->down, e, 4);
	else if (cell == '7')
		put_image_entity(g, g->down, e, 5);
	else if (60 <= cell && cell <= 65)
		print_player_down(g, e, cell - 10);
	else if (cell == 'E')
		print_player_down(g, e, '5');
}

void	print_player_left(t_game *g, t_entity *e, char cell)
{
	if (cell == '2')
		put_image_entity(g, g->left, e, 0);
	else if (cell == '3')
		put_image_entity(g, g->left, e, 1);
	else if (cell == '4')
		put_image_entity(g, g->left, e, 2);
	else if (cell == '5')
		put_image_entity(g, g->left, e, 3);
	else if (cell == '6')
		put_image_entity(g, g->left, e, 4);
	else if (cell == '7')
		put_image_entity(g, g->left, e, 5);
	else if (60 <= cell && cell <= 65)
		print_player_left(g, e, cell - 10);
	else if (cell == 'E')
		print_player_left(g, e, '5');
}

void	print_player_right(t_game *g, t_entity *e, char cell)
{
	if (cell == '2')
		put_image_entity(g, g->right, e, 0);
	else if (cell == '3')
		put_image_entity(g, g->right, e, 1);
	else if (cell == '4')
		put_image_entity(g, g->right, e, 2);
	else if (cell == '5')
		put_image_entity(g, g->right, e, 3);
	else if (cell == '6')
		put_image_entity(g, g->right, e, 4);
	else if (cell == '7')
		put_image_entity(g, g->right, e, 5);
	else if (60 <= cell && cell <= 65)
		print_player_right(g, e, cell - 10);
	else if (cell == 'E')
		print_player_right(g, e, '5');
}
