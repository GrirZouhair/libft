/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:29:44 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 12:29:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Character Representation:

    The C standard allows the char type to be either signed or unsigned, depending on the compiler and architecture.
    If a char is signed, it can hold negative values (typically from -128 to 127), while an unsigned char holds values from 0 to 255.
*/
#include "libft.h"
#include <stdio.h>
/*
    ==>The first Method :
int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;
    char unsigned *str1;
    char unsigned *str2;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

    if (!n)
        return (0);
    while ((str1[i] || str2[i]) && i < n)
    {
        if (str1[i] == str2[i])
        {
            i++;
        }
        else
        {
            return (str1[i] - str2[i]);
        }
    }
    return (0);
}
*/
// The second Method :
int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

    if (!n)
        return (0);

    while (str1[i] && str2[i] && i < n && str1[i] == str2[i])
    {
        i++;
    }
    return (str1[i] - str2[i]);
}

int main()
{
    const char *str1 = "heb";
    const char *str2 = "hea";
    // Compare identical strings
    printf("Comparing str1 and str2: %d\n", ft_strncmp(str1, str2, 3)); // Should return 0
}