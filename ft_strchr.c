/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:20:43 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/28 11:15:37 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ca;
	int				i;

	i = 0;
	ca = (unsigned char )c;
	while (s[i])
	{
		if (s[i] == ca)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (s[i] == ca)
		return ((char *)(s + i));
	return (NULL);
}
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:38:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 09:38:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
// You’re not "changing" s itself, only returning a pointer to a position in s. This is why const is used.
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
// int main()
// {
//     const char *string = "abc";
//     char ch = 'b';
//     printf("%s", ft_strchr(string, ch));
// }
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
