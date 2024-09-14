/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
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
}
