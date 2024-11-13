/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:25:34 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/12 14:13:28 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			st_len;
	size_t			i;
	char			*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	st_len = ft_strlen(s);
	str = (char *)malloc(st_len + 1);
	if (!str)
		return (NULL);
	while (i < st_len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
