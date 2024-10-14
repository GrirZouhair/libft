/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:43:14 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 15:43:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, int n)
{
    int i;
    int j;
    int st_len;

    i = 0;
    j = 0;
    st_len = ft_strlen(needle);
    if (!needle || needle == haystack)
        return ((char *)(haystack));
    if (!haystack && !needle)
        return (0);
    while (haystack[i] && j != st_len && i < n)
    {
        if (haystack[i] == needle[j])
            j++;
        else
            j = 0;
        i++;
    }
    if (j == st_len)
        return ((char *)(haystack + i - j));
    // Case 5: If no match was found after checking n characters, return 0 (NULL)
    return (0);
}

int main(void)
{
    const char *haystack = "welcome to 42!";
    const char *needle = "lc";
    int n = 12;

    printf("%s", ft_strnstr(haystack, needle, n));
}