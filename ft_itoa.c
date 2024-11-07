/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:49:36 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/05 15:29:33 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
