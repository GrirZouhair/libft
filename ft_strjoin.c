/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:23:51 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/01 15:15:16 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		lens;
	char		*destination;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s2)
		ft_strdup(s1);
	lens = ft_strlen(s1) + ft_strlen(s2);
	destination = (char *)malloc(lens + 1);
	if (!destination)
		return (NULL);
	while (s1[j])
		destination[i++] = s1[j++];
	j = 0;
	while (s2[j])
		destination[i++] = s2[j++];
	destination[i] = '\0';
	return (destination);
}
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:18:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/27 11:18:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len;
    char *str;
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!s1 && !s2)
    {
        return (NULL);
    }
    if (!s2)
    {
        return (ft_strdup(s1));
    }
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    while (s1[j])
    {
        str[i++] = s1[j++];
    }
    j = 0;
    while (s2[j])
    {
        str[i++] = s2[j++];
    }
    str[i] = '\0';
    return (str);
}
#include <stdio.h>
int main()
{
    const char s1[] = "zouhair";
    const char s2[] = "grir";
    printf("%s", ft_strjoin(s1, s2));
}
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
