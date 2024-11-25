/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:48:16 by jormoral          #+#    #+#             */
/*   Updated: 2024/11/25 13:04:56 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube3d.h"

int	player_position(s_cube *file)
{
	double	x;
	double	y;
	char	*s;

	s = "NSWE";
	x = 0;
	while (file->map[(int)x][(int)y])
	{
		y = 0;
		while (file->map[(int)x][(int)y])
		{
			if (ft_strrchr(s, file->map[(int)x][(int)y]))
			{
				file->orientation = ft_strrchr(s, file->map[(int)x][(int)y]);
				file->position_player.x = x;
				file->position_player.y = y;
				return (0);
			}
			y++;
		}
		x++;
	}
	return(printf("Not found player\n"),1);
}

float	initial_orientation(s_cube *file)
{
	
	if (file->orientation[0] == 'N')
		return (file->alpha = PI / 2);
	if (file->orientation[0] == 'S')
		return (file->alpha = PI * 1.5);
	if (file->orientation[0] == 'W')
		return (file->alpha = PI);
	if (file->orientation[0] == 'E')
		return (file->alpha = PI * 2);
	return (0);
}
