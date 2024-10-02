/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
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
        while (src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (len);
}

#include <stdio.h>
int main()
{
    char source[] = "defgh";
    char destination[20] = "abc";
    int size = 2;
    printf("%d\n", ft_strlcpy(destination, source, size));
    printf("%s", destination);
}