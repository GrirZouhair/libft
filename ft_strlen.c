/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:36:48 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/26 11:49:10 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:13:27 by marvin            #+#    #+#             */
/*   Updated: 2024/09/10 15:13:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
==>     The length of a string can never be negative, so using an unsigned type (size_t) is appropriate.
==>     strlen could return very large values on systems with lots of memory, so using size_t ensures that the function can handle large strings.
*/
#include "libft.h"
#include <stdio.h>
size_t ft_strlen(const char *s)
{
    size_t index;

    index = 0;
    while (s[index])
    {
        index++;
    }
    return (index);
}
// int main()
// {
//     const char d[] = "Hello";
//     printf("the result is : %d", ft_strlen(d));
// }
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
