/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:39:58 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/28 12:00:45 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char				*str;
	size_t						i;
	unsigned char				ca;

	ca = (unsigned char )c;
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == ca)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
