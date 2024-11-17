#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
int main()
{
    int i = 0;
    char str[] = "zouhair";
    char *dst;
    dst = malloc(8 * sizeof(char));

    ft_strlcpy(dst, str, 8);

    printf("%s\n", dst);
    printf("-----------\n");

    printf("%c\n", dst[1]);
    dst[1] = 'x';
    printf("%s\n", dst);
    *(dst + 6) = 'P';
    printf("%s\n", dst);
    free(dst);
}