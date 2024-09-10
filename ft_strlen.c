/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:13:27 by marvin            #+#    #+#             */
/*   Updated: 2024/09/10 15:13:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
size_t ft_strlen(const char *s)
{
    size_t index;

    index = 0;
    while (s[index])
    {
        index++;
    }
    return (index);
}
int main(void)
{
    const char *test_str = "Hello, world!";
    size_t length;

    length = ft_strlen(test_str);
    printf("The length of the string \"%s\" is %zu.\n", test_str, length);

    return 0;
}