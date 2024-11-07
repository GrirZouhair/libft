/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:13:27 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/28 08:54:12 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_upper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isalpha(int c)
{
	if (is_upper(c) || is_lower(c))
	{
		return (1);
	}
	return (0);
}
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:01:54 by marvin            #+#    #+#             */
/*   Updated: 2024/09/08 14:01:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_uppercase(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_lowercase(int c)
{
    return (c >= 'a' && c <= 'z');
}

int ft_isalpha(int c)
{
    if (ft_uppercase(c) || ft_lowercase(c))
        return (1);
    return (0);
}
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
