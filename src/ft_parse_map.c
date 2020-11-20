/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 19:22:32 by epuclla           #+#    #+#             */
/*   Updated: 2020/11/19 20:30:32 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int	ft_parse_map(char *data, t_map *map)
{
	int	fd;
	char	*line;

	if ((fd = open(data, O_RDONLY)) == FAILED)
		return (ft_perror(FAILED));
	if (ft_initialize(fd, map) == FAILED)
	{
		close(fd);
		return (FAILED);
	}
	while(map->text)
	{
			
	}

}