/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:11:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 17:11:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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