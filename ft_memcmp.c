/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:00:58 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/28 12:00:58 by zogrir           ###   ########.fr       */
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:40:05 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 16:40:05 by marvin           ###   ########.fr       */
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
=======
int ft_memcmp(const void *s1, const void *s2, int n)
{
    unsigned char *d;
    unsigned char *s;
    int i;

    i = 0;
    d = (unsigned char *)s1;
    s = (unsigned char *)s2;

    while (i < n)
    {
        if (d[i] != s[i])
            return d[i] - s[i];
        i++;
    }
    return 0;
}
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str1[] = "zello, World!";
    char str2[] = "Hello, 42 Network!";
    int n = 5;

    // Using ft_memcmp to compare the first n bytes of str1 and str2
    int result = ft_memcmp(str1, str2, n);

    if (result == 0)
    {
        printf("The first %d bytes of both strings are equal.\n", n);
    }
    else if (result < 0)
    {
        printf("The first %d bytes of str1 are less than str2.\n", n);
    }
    else
    {
        printf("The first %d bytes of str1 are greater than str2.\n", n);
    }

    return 0;
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
}
