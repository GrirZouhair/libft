/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:03:17 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 10:03:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, int len)
{
    int st_len;
    char *destination;

    st_len = ft_strlen(s);
    if (!s)
        return (NULL);
    if ((int)start >= st_len)
        return ft_strdup("");
    destination = (char *)malloc(st_len + 1);
    if (!destination)
        return (NULL);
    ft_memcpy(destination, s, len + 1);
    return (destination);
}
int main()
{
    char const string[] = "abcdefghij";
    // int ca = 5;
    printf("%s", ft_substr(string, 0, 4));
}