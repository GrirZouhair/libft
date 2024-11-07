/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:14:38 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/24 18:26:12 by zogrir           ###   ########.fr       */
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:44:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 23:44:54 by marvin           ###   ########.fr       */
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
	else
	{
		ft_putchar_fd((nbr % 10) + '0', fd);
	}
}
=======
void ft_putnbr_fd(int nb, int fd)
{
    long nbr;

    nbr = nb;
    if (nbr < 0)
    {
        ft_putchar_fd('-', 1);
        nbr *= -1;
    }
    if (nbr > 9)
    {
        ft_putnbr_fd(nbr / 10, fd);
        ft_putchar_fd((nbr % 10) + '0', fd);
    }
    else
    {
        ft_putchar_fd((nbr % 10) + '0', fd);
    }
}
int main()
{
    int n = 0;
    int fd = 1;
    ft_putnbr_fd(n, fd);
}
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
