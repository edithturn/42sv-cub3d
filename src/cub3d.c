/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:45:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/11/19 19:16:16 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int main(int ac, char **ag)
{
	t_map *map;

	map = (t_map *)ft_memalloc(sizeof(t_map));
	if(ft_parse_map(ag[1], map) == FAILED)
		return FAILED;
	if (ac == 2)
	{
		map->file = ag[1];
		cub3d_validations(map);
		
		cub3d_initialize(map);
	}
	if (ac == 1)
		printf("%s", "No map");

	return (0);
}