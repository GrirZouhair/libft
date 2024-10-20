/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:37:12 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 11:37:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    size_t dest_len;
    size_t src_len;
    size_t i;

    i = 0;
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);

    if (size <= dest_len)
    {
        return (size + src_len);
    }

    while (src[i] && (dest_len + i < size - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest_len + src_len);
}

int main()
{
    char destination[] = "abc";
    char source[] = "world!";
    int size = 20;
    printf("%d\n", ft_strlcat(destination, source, ft_strlen(source)));
    printf("%s", destination);
}