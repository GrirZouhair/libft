/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:45:25 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 10:45:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    unsigned char ca;
    int len;

    len = ft_strlen(s);
    ca = (unsigned char)c;
    while (len >= 0)
    {
        if (s[len] == ca)
        {
            return ((char *)(s + len));
        }
        len--;
    }
    return (NULL);
}

#include <stdio.h>
int main()
{
    const char string[] = "abcdaf";
    int c = 'a';
    printf("%s", ft_strrchr(string, c));
}