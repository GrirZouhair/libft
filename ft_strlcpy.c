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
        while (src[i] && i < size - 1) // src[i] to ignore loop for the whole size && exclude "\0"
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (len);
}
