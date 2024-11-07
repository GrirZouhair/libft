/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:30:55 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/07 14:49:49 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int					i;
	int					sign;
	int long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (s[i] == '+')
		i++;
	while (ft_isdigit(s[i]))
	{
		result *= 10;
		result += s[i] - '0';
		i++;
	}
	return (result * sign);
}
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:09:06 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 14:09:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
int ft_atoi(const char *str)
{
    int i;
    int sign;
    unsigned long int result;

    sign = 1;
    i = 0;
    result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    // increment one time for each execution
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (ft_isdigit(str[i])) // we skipped checking +-
    {
        result *= 10;
        result += str[i] - '0'; // char to int
        i++;
    }
    return (result * sign);
}
int main()
{
    const char string[] = "   -+42fdsfsfsf";
    printf("%d", ft_atoi(string));
}
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
