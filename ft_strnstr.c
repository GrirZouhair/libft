/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:55:14 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/01 15:20:03 by zogrir           ###   ########.fr       */
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:43:14 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 15:43:14 by marvin           ###   ########.fr       */
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

char	*ft_strnstr(const char *s1, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)(s1));
	while (s1[i] && i < n)
	{
		if (s1[i] == needle[0])
		{
			j = 0;
			while (needle[j] && s1[i + j] == needle[j] && (i + j) < n)
			{
				j++;
			}
			if (!needle[j])
			{
				return ((char *)(s1 + i));
			}
		}
		i++;
	}
	return (NULL);
}
=======
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
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
