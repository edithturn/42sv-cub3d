/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_resolution.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 12:55:03 by epuclla           #+#    #+#             */
/*   Updated: 2020/10/13 13:56:21 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../cub3d.h"

void	cub3d_resolution(char *line)
{
	while (line != NULL)
	{
		if (strcmp(line, "R") < 0)
			printf("%s", "R");
		line++;
	}
}