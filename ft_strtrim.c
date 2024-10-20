/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:17:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 12:17:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_index(char const *s1, char const *set)
{
    int i;
    i = 0;
    while (s1[i])
    {
        if (ft_strchr(set, s1[i])) // if false we increment i that's why we loop the whole s1
        {
            return (i);
        }
        i++;
    }
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start_index;

    if (!s1)
        return (4);
    start_index = ft_index(s1, set);
    return (int)(start_index);
}
int main()
{
    const char string[] = "zouhair";
    const char set[] = "ha";
    printf("%d", ft_strtrim(string, set));
}