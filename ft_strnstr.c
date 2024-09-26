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

/*
The reason for casting haystack to (char *) is because the return type of the function ft_strnstr is char *.
Even though haystack is declared as const char *, the function needs to return a char *.

If you return haystack directly (without the cast), it will try to return a const char *, but the function signature expects a char *.
*/
#include "libft.h"
#include <stdio.h>
/*
Why (char *): The (char *) cast is necessary because haystack is declared as const char * (meaning a pointer to a constant character), but the function returns a char * (a pointer to a non-const character). The cast ensures the function returns the correct type (char *), even though you're casting away the const qualifier.
*/
char *ft_strnstr(const char *haystack, const char *needle, int n)
{
    int i;
    int j;
    int st_len;

    i = 0;
    j = 0;
    st_len = ft_strlen(needle);
    if (needle[i] == '\0' || needle == haystack)
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
    const char *needle = "e";
    int n = 12;

    printf("%s", ft_strnstr(haystack, needle, n));
}