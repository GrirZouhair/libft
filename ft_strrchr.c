/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:33:04 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/23 09:52:53 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ca;
	long int		len;

	len = ft_strlen(s);
	ca = (unsigned char )c;
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
=======
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
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
