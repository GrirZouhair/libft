/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:23:51 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/01 15:15:16 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		lens;
	char		*destination;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s2)
		ft_strdup(s1);
	lens = ft_strlen(s1) + ft_strlen(s2);
	destination = (char *)malloc(lens + 1);
	if (!destination)
		return (NULL);
	while (s1[j])
		destination[i++] = s1[j++];
	j = 0;
	while (s2[j])
		destination[i++] = s2[j++];
	destination[i] = '\0';
	return (destination);
}
