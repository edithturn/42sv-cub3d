/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 00:45:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/06 22:15:37 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

int main(int ac, char **ag)
{
	t_cub3d	cub3d;

	if (ac == 2)
	{
		if(ft_is_file_correct_format(ag[1]) == FAILED)
			return (FAILED);		}
		if (ft_initialize_file_content(ag[1], &cub3d) == -1)
			return (FAILED);
		if(ft_parse_file_content(ag[1], &cub3d.map) == FAILED)
			return (FAILED);
		//if(ft_init_cub3d_game(&cub3d.map) == -1)
		//	return (ft_general_error(-1));
		//cub3d_figures(map, 4, 5 , 7 , 5, 8);
	return (0);
}