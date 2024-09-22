/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:40:05 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 16:40:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
}
