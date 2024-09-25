/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:47:10 by jorteixe          #+#    #+#             */
/*   Updated: 2024/08/08 11:47:10 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static void	init_map(t_map *map);
static void	init_player(t_player *player);

void	init_data(t_data *data)
{
	init_map(&data->map);
	init_player(&data->player);
}

static void	init_map(t_map *map)
{
	map->north_texture_path = NULL;
	map->south_texture_path = NULL;
	map->east_texture_path = NULL;
	map->west_texture_path = NULL;
	map->no_count = 0;
	map->so_count = 0;
	map->we_count = 0;
	map->ea_count = 0;
	map->c_count = 0;
	map->f_count = 0;
	map->ceiling_color.r = -1;
	map->ceiling_color.b = -1;
	map->ceiling_color.g = -1;
	map->floor_color.r = -1;
	map->floor_color.b = -1;
	map->floor_color.g = -1;
}

static void	init_player(t_player *player)
{
	player->px = -1;
	player->py = -1;
}
