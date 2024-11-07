/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:24:00 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/31 15:03:26 by zogrir           ###   ########.fr       */
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:28:42 by marvin            #+#    #+#             */
/*   Updated: 2024/09/15 10:28:42 by marvin           ###   ########.fr       */
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*destination;

	destination = (unsigned char *)b;
	while (len > 0)
	{
		destination[len - 1] = (unsigned char )c;
		len--;
	}
	return (b);
=======
#include <stdio.h>
/*
The use of void * means that the function can accept a pointer to any type of data (e.g., char, int, float, etc.). This allows the function to operate on various data types without needing to specify the exact type, making it more flexible and reusable.
*/
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    str = (unsigned char *)b;
    str[len] = '\0';
    while (len > 0)
    {
        str[len - 1] = (unsigned char)c;
        len--;
    }
    return (b);
    // The return value can be useful for chaining function calls or for confirming the memory location that was modified.
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
}
