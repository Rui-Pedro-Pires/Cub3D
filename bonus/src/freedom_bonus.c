/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freedom.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:42:10 by jorteixe          #+#    #+#             */
/*   Updated: 2024/07/22 15:42:10 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d_bonus.h"

void	free_map(t_data *data)
{
	t_map	*map;

	map = &data->map;
	if (map->north_texture_path != NULL)
		free(map->north_texture_path);
	if (map->south_texture_path != NULL)
		free(map->south_texture_path);
	if (map->west_texture_path != NULL)
		free(map->west_texture_path);
	if (map->east_texture_path != NULL)
		free(map->east_texture_path);
}

void	free_map_array(char **map_array)
{
	int	i;

	i = 0;
	if (map_array == NULL)
		return ;
	while (map_array[i] != NULL)
	{
		free(map_array[i]);
		i++;
	}
	free(map_array);
}

void	free_array2d(void **array)
{
	int	i;

	i = 0;
	if (array == NULL)
		return ;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	william_wallace(t_data *data)
{
	free_array2d((void **)data->map.full_file_array);
	free_map(data);
}

void	free_mapi(char **map, int rows)
{
	int	i;

	i = 0;
	while (i < rows + 2)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
