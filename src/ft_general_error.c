/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_general_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:08:07 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/10 15:22:15 by epuclla          ###   ########.fr       */
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

int	ft_close(int fd)
{
	close(fd);
	return (-1);
}