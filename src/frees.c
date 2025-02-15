/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:12:33 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/11/18 12:32:11 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cube3d.h"

void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	free_path(s_cube *file)
{
	free(file->pathtextureeast);
	free(file->pathtexturenorth);
	free(file->pathtexturesouth);
	free(file->pathtexturewest);
}