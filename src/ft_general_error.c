/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_general_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:08:07 by epuclla           #+#    #+#             */
/*   Updated: 2020/11/23 12:09:52 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int	ft_general_error(int n)
{
	if (n == 0)
		printf("%s",  "Invalid Map" );
	else if (n == -1)
		printf("%s", "Error");
	return (FAILED);
} 

int	ft_perror_free_map(int n, t_map *map)
{
	int	i;

	i = -1;
	while (i++ < 4)
		if (map->texture[i])
			free(map->texture[i]);
	if (map->content)
		printf("Hola"); //ft_lstclear(&map->content, free);
	if (map->arr)
	{
		i = 0;
		while (i < map->rows)
			free(map->arr[i++]);
		free(map->arr);
	}
	return ((n == -42) ? FAILED : ft_general_error(n));
}