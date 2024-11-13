/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:20:36 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/29 15:00:12 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*dest;

	if (!s1 || !set)
	{
		return (0);
	}
	while (*s1 != '\0' && ft_strchr(set, *s1))
	{
		s1++;
	}
	len = ft_strlen(s1);
	if (len != 0)
	{
		while (len >= 0 && ft_strchr(set, s1[len - 1]))
		{
			len--;
		}
	}
	dest = ft_substr((char *)s1, 0, len);
	return (dest);
}
