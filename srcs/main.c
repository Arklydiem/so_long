/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <argomez@student.42angouleme.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:51:50 by argomez           #+#    #+#             */
/*   Updated: 2022/05/27 11:17:18 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

//	int y;
//	y = -1;
//	while (++y < game->map->nb_starts)
//ft_printf("x = %d; y = %d\n", game->map->starts[y].x, game->map->starts[y].y);

int	main(int argc, char **argv)
{
	t_game	*game;

	game = ft_calloc(1, sizeof(t_game));
	game_init(game);
	if (argc < 2)
		ft_error(1, game);
	map_inspector(++argv, game);
	clear_game(game);
	return (0);
}
