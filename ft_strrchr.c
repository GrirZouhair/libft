/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:33:04 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/23 09:52:53 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ca;
	long int		len;

	len = ft_strlen(s);
	ca = (unsigned char )c;
	while (len >= 0)
	{
		if (s[len] == ca)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (NULL);
}
