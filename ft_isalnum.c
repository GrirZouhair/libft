/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:17:44 by zogrir            #+#    #+#             */
/*   Updated: 2024/10/22 10:21:26 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:28:37 by marvin            #+#    #+#             */
/*   Updated: 2024/09/08 14:28:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
gcc -Wall -Wextra -Werror ft_isalnum.c ft_isdigit.c ft_isalpha.c -o test_program
*/
#include "libft.h"
int ft_isalnum(int c)
{
    return (ft_isdigit(c) || ft_isalpha(c));
>>>>>>> ed238d4ed10b61964a75d7d35c105c9d162681f7
}
