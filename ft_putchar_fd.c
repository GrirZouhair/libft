/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:55:19 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/07 09:00:48 by zogrir           ###   ########.fr       */
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:12:59 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 23:12:59 by marvin           ###   ########.fr       */
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}


=======
void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
