/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:25:41 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 16:25:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, int n)
{
    unsigned char *str;
    unsigned char ch;
    int i;

    i = 0;
    str = (unsigned char *)s;
    ch = (unsigned char)c;

    while (i < n)
    {
        if (str[i] == ch)
            return (str + i);
        i++;
    }
    return (0);
}
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, 42 Network!";
    char ch = '4';
    size_t n = 10;

    // Using ft_memchr to find '4' in the first 10 bytes of str
    char *result = ft_memchr(str, ch, n);

    printf("%s\n", result);
    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    }
    else
    {
        printf("Character '%c' not found in the first %zu bytes\n", ch, n);
    }

    return 0;
}
