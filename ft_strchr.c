/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:38:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 09:38:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    unsigned char ca;

    ca = (unsigned char)c;

    while (s[i])
    {
        if (s[i] == ca)
        {
            return ((char *)(s + i));
        }
        i++;
    }
    return (NULL);
}
int main()
{
    const char *string = "abc";
    char ch = 'b';
    printf("%s", ft_strchr(string, ch));
}