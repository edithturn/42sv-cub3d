/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_content_is_element.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:46:11 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/10 12:52:53 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_map_content_is_resolution(char *line)
{
	if (*line == 'R' && *(line + 1) == ' ')
		return (1);
	return (0);
}

int		ft_map_content_is_no(char *line)
{
	if (*line == 'N' && *(line + 1) == 'O' && *(line + 2) == ' ' )
		return (1);
	return (0);
}

int		ft_map_content_is_so(char *line)
{
	if (*line == 'S' && *(line + 1) == 'O' && *(line + 2) == ' ' )
		return (1);
	return (0);
}

int		ft_map_content_is_we(char *line)
{
	if (*line == 'W' && *(line + 1) == 'E' && *(line + 2) == ' ' )
		return (1);
	return (0);
}

int		ft_map_content_is_ea(char *line)
{
	if (*line == 'E' && *(line + 1) == 'A' && *(line + 2) == ' ' )
		return (1);
	return (0);
}

int		ft_map_content_is_s(char *line)
{
	if(*line == 'S' && *(line + 1) == ' ' )
		return (1);
	return (0);
}

int		ft_map_content_is_floor(char *line)
{
	if((*line == 'F' && *(line + 1) == ' ' ))
		return (1);
	return (0);
}

int		ft_map_content_is_celing(char *line)
{
	if((*line == 'C' && *(line + 1) == ' ' ))
		return (1);
	return (0);
}