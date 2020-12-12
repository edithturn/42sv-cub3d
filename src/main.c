/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:45:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/12 01:18:13 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int main(int ac, char **ag)
{
	t_cub3d	cub3d;

	ft_memset(&cub3d, 0, sizeof(t_cub3d));
	
	if (ac ==1 || ac > 3 )
		printf("%s", "Invalid number parameters");

	if(!ft_is_file_correct_format(cub3d.map.file  = ag[1]))
			return (FAILED);
	ft_init_game(&cub3d);
	return (1);
}