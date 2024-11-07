/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
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
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:03:17 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 10:03:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, int len)
{
    int st_len;
    char *destination;

    st_len = ft_strlen(s);
    if (!s)
        return (NULL);
    if ((int)start >= st_len)
        return ft_strdup("");
    destination = (char *)malloc(st_len + 1);
    if (!destination)
        return (NULL);
    ft_memcpy(destination, s, len + 1);
    return (destination);
}
int main()
{
    char const string[] = "abcdefghij";
    // int ca = 5;
    printf("%s", ft_substr(string, 0, 4));
}
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
