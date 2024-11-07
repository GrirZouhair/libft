/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:04:23 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/28 11:19:33 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t			st_len;
	size_t			i;

	i = 0;
	st_len = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (st_len);
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:09:15 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 11:09:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned i;
    unsigned len;

    i = 0;
    len = ft_strlen(src);

    if (size > 0) // when size==1, only add a null teminator to dest
    {
        while (src[i] && i < size - 1) // src[i] to ignore loop for the whole size && exclude "\0"
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (len);
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
}
