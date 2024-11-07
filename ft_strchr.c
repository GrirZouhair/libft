/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:20:43 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/28 11:15:37 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ca;
	int				i;

	i = 0;
	ca = (unsigned char )c;
	while (s[i])
	{
		if (s[i] == ca)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (s[i] == ca)
		return ((char *)(s + i));
	return (NULL);
}
