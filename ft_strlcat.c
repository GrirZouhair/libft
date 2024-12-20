/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:39:58 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/13 11:21:42 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	if ((!src || !dest) && (size == 0))
	{
		return (0);
	}
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size == 0)
	{
		return (src_len);
	}
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] && i + dest_len < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
