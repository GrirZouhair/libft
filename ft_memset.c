/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:28:42 by marvin            #+#    #+#             */
/*   Updated: 2024/09/15 10:28:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

The main idea of the `ft_memset` algorithm is to **fill a block of memory with a specific byte value**.

Here's a quick summary:

- You have a block of memory (like an array), and you want to fill it with the same value, byte by byte.
- `ft_memset` takes a pointer to that memory, a value (as a byte), and the number of bytes to fill.
- It writes that byte value into each position in the memory block, starting from the first position up to the specified length.

This function is useful for initializing or resetting data in memory, like filling an array with zeros or another specific value.

*/

#include "libft.h"
#include <stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *i;

    i = (unsigned char *)b;
    while (len > 0)
    {
        *i = (unsigned char)c; // Cast `c` to `unsigned char`
        len--;
        i++;
    }
    return (b);
}

int main()
{
    char arr[10]; // Array of 10 characters
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 'z'; // Use 'A' to easily spot changes
    }
    // Use ft_memset to fill the array with 'A'
    ft_memset(arr, 'A', 10);

    // Print the array to see the result
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", arr[i]);
    }

    return 0;
}