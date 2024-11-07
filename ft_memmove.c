/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:28:21 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/26 11:29:51 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dst == NULL)
		return (dst);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else if ((len > 0) && (s > d))
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:09:17 by marvin            #+#    #+#             */
/*   Updated: 2024/09/17 11:09:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copies a block of memory from a source location to a destination location,
handling cases where the memory regions might overlap.
*/
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;

    if (src == NULL && dst == NULL)
        return (dst);
    s = (unsigned char *)src;
    d = (unsigned char *)dst;

    /*
    src (pointing to the beginning of the string) is str, which has a lower memory address (e.g., 0x01).
    dst (pointing to str + 7, which is the address where the space is) has a higher memory address (e.g., 0x08).
    */

    if (d > s) // s < d means that the source block is located in memory before the destination block.
    {
        while (len > 0)
        {
            len--;
            d[len] = s[len];
        }
    }
    else if ((len > 0) && (s > d))
    {
        ft_memcpy(d, s, len);
    }
    return (dst);
}

#include <stdio.h>
int main()
{
    char str[] = "Goodbye, World!";

    // Print original string
    printf("Original String: %s\n", str);

    // Copy "Good" to a new position in the string
    ft_memmove(str + 8, str, 4); // Copy "Good" to position 8

    // Print modified string
    printf("Buffer after ft_memmove: %s\n", str);

    return 0;
}
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
