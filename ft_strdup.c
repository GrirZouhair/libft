/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:09:13 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/24 12:25:49 by zogrir           ###   ########.fr       */
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:11:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 17:11:16 by marvin           ###   ########.fr       */
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

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
=======
#include <stdlib.h>
#include <stdio.h>
char *ft_strdup(const char *s)
{
    char *dest;
    int size;

    size = ft_strlen(s);
    dest = (char *)malloc(size + 1); // +1  is used to allocate extra memory for the null terminator ('\0')
    if (!dest)
        return (0);
    ft_memcpy(dest, s, size);
    dest[size] = '\0';
    return (dest);
}
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
