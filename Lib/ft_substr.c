/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:49:40 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/11/18 12:18:45 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			c;

	c = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = (ft_strlen(s) - start);
	sub = (char *) malloc(len + 1);
	if (!s || !sub)
		return (NULL);
	while (s[c] != '\0' && c < len)
	{
		sub[c] = s[start];
		start++;
		c++;
	}
	sub[c] = '\0';
	return (sub);
}
