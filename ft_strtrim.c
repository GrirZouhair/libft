/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:20:36 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/29 15:00:12 by zogrir           ###   ########.fr       */
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:17:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/18 12:17:45 by marvin           ###   ########.fr       */
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*dest;

	if (!s1 || !set)
	{
		return (0);
	}
	while (*s1 != '\0' && ft_strchr(set, *s1))
	{
		s1++;
	}
	len = ft_strlen(s1);
	if (len != 0)
	{
		while (len >= 0 && ft_strchr(set, s1[len - 1]))
		{
			len--;
		}
	}
	dest = ft_substr((char *)s1, 0, len);
	return (dest);
}
=======
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
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
