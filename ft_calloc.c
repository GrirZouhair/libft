/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zogrir <zogrir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:01:55 by zogrir            #+#    #+#             */
/*   Updated: 2024/11/19 20:45:24 by zogrir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*destination;

	if (size && n && (n * size) / size != n)
		return (NULL);
	destination = (void *)malloc(n * size);
	if (!destination)
		return (NULL);
	ft_bzero(destination, (n * size));
	return (destination);
}
