/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:41:23 by epuclla           #+#    #+#             */
/*   Updated: 2020/12/06 21:17:06 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_H
# define CONFIG_H

// INIT DEBUG
#  define DD printf("\033[1;34m[%d] : %s : %s\033[0m\n", __LINE__, __FUNCTION__, __FILE__); getchar();
// END DEBUG

# define FAILED						-1
# define TEXTURES				4
# define SUCCESS				1
# define Y		0

#endif