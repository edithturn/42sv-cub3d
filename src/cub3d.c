/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:45:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/11/23 12:10:36 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int main(int ac, char **ag)
{
	t_map	*map;

	map = (t_map *)ft_memalloc(sizeof(t_map));
	map->file = ag[1];
	if (ac == 2)
	{
		if(ft_is_cub_format(ag[1]) == FAILED)
			return (FAILED);
		if(ft_general_parse(map) == FAILED)
			return (FAILED);
		if(ft_init_game(map) == -1)
			return (ft_general_error(-1));
		//raycasting
	}
	return (0);
}

int ft_is_cub_format(char *ag)
{
	char	*format;

	format = ft_strchr(ag, '.');
	if (format != NULL)
		if (ft_strcmp(format, ".cub") != 0)
			return (FAILED);
	return (0);
}