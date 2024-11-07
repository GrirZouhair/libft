/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:01:52 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/02 16:55:18 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t				str_len;
	size_t				str_end;
	char				*destination;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	str_end = 0;
	if (start < str_len)
		str_end = str_len - start;
	else
	{
		destination = (char *)malloc(1);
		if (destination)
			destination[0] = '\0';
		return (destination);
	}
	if (str_end > len)
		str_end = len;
	destination = (char *)malloc(str_end + 1);
	if (!destination)
		return (NULL);
	ft_strlcpy(destination, (char *)(s + start), str_end + 1);
	return (destination);
}
