/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:01:54 by marvin            #+#    #+#             */
/*   Updated: 2024/09/08 14:01:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_lowercase(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_uppercase(int c)
{
    return (c >= 'a' && c <= 'z');
}

int ft_isalpha(int c)
{
    if (ft_uppercase(c) || ft_lowercase(c))
        return (1);
    return (0);
}