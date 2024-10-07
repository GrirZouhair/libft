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
/*
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *i;

    i = (unsigned char *)b;
    // The <<i>> pointer will now point to the same memory location but can be used to manipulate it byte by byte.
    while (len > 0)
    {
        *i = (unsigned char)c; // Cast `c` to `unsigned char`
        len--;
        i++;
    }
    return (b);
}
The use of void * means that the function can accept a pointer to any type of data (e.g., char, int, float, etc.). This allows the function to operate on various data types without needing to specify the exact type, making it more flexible and reusable.
*/
void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    str = (unsigned char *)b;
    while (len > 0)
    {
        str[len - 1] = (unsigned char)c; // we affected char that's why use %c
        len--;
    }
    return (b);
    // The return value can be useful for chaining function calls or for confirming the memory location that was modified.
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