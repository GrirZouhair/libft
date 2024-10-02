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
    while (len > 0)
    {
        if (s[len] == ca)
        {
            return ((char *)(s + len));
        }
        len--;
    }
    return (NULL);
}

int main()
{
    const char *str = "Hello, world!";
    char ch = 'o';
    printf("%s", ft_strrchr(str, ch));

    return 0;
}
