/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:49:36 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/05 15:29:33 by zogrir           ###   ########.fr       */
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:49:22 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 13:49:22 by marvin           ###   ########.fr       */
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

int	ft_len(int n)
{
	long int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_char(char *s, unsigned int number, long int len, int sign)
{
	while (len > 0)
	{
		s[len - 1] = (number % 10) + '0';
		number /= 10;
		len--;
	}
	if (sign)
	{
		s[0] = '-';
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	unsigned int	number;
	int				sign;

	sign = 0;
	len = ft_len(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	if (n < 0)
	{
		number = -n;
		sign = 1;
	}
	else
		number = n;
	s = ft_char(s, number, len, sign);
	return (s);
}
=======
static char *ft_char(char *s, unsigned int number, long int len, int is_negative)
{
    while (len > 0)
    {
        s[len - 1] = (number % 10) + '0'; // int to char
        number /= 10;
        len--;
    }
    if (is_negative)
    {
        s[0] = '-';
    }

    return (s);
}

static int ft_len(int n)
{
    int len;

    len = 0;
    if (n <= 0)
    {
        len++;
    }
    while (n != 0) // we dont have need to the each of numbers just number of digit
    {
        n /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{

    char *s;
    unsigned int number;
    long int len;
    int is_negative = 0;

    len = ft_len(n);
    s = (char *)malloc(len + 1);
    if (!s)
        return (NULL);

    s[len] = '\0';

    if (n == 0)
    {
        s[0] = '0';
        return (s); // Early return to avoid calling ft_char unnecessarily
    }
    if (n < 0)
    {
        number = -n;
        is_negative = 1;
    }
    else
    {
        number = n;
    }
    s = ft_char(s, number, len, is_negative);
    return (s);
}
#include <stdio.h>

int main()
{
    int number = -12;
    char *result = ft_itoa(number);
    printf("Converted number: %s\n", result);
    free(result);
}
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
