/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:44:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 23:44:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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