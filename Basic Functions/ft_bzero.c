/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:51:45 by marvin            #+#    #+#             */
/*   Updated: 2024/09/15 12:51:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_bzero(void *b, size_t n)
{
    unsigned char *str;
    size_t i;

    str = (unsigned char *)b;
    i = 0;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}

int main()
{
    char arr[5];

    // Fill the array with non-zero values for testing purposes
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 'A'; // Use 'A' to easily spot changes
    }

    // Call ft_bzero to zero out the entire array
    ft_bzero(arr, 5);

    // Print buffer contents after bzero
    printf("Buffer after ft_bzero:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (unsigned char)arr[i]); // Print as integer to visualize zero
    }
    printf("\n");

    return 0;
}