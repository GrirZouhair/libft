/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:55:14 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/13 18:18:57 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)(s1));
	if (n == 0)
		return (NULL);
	while (s1[i] && i < n)
	{
		if (s1[i] == needle[0])
		{
			j = 0;
			while (needle[j] && s1[i + j] == needle[j] && (i + j) < n)
			{
				j++;
			}
			if (!needle[j])
			{
				return ((char *)(s1 + i));
			}
		}
		i++;
	}
	return (NULL);
}
