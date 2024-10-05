/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
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
        result += str[i] - '0';
        i++;
    }
    return (result * sign);
}
int main()
{
    const char string[] = "   -+42fdsfsfsf";
    printf("%d", ft_atoi(string));
}