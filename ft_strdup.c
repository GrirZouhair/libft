/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:09:13 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/24 12:25:49 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*destination;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	destination = (char *)malloc(s_len + 1);
	if (!destination)
		return (NULL);
	ft_memcpy (destination, s, s_len);
	destination[s_len] = '\0';
	return (destination);
}
