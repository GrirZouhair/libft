#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "abc";
    char *ptr;
    ptr = str;

    printf("%s\n", ptr);

    printf("--------\n");

    while (*ptr)
    {
        printf("%p\n", ptr);
        ptr++;
    }

    printf("-----------\n");

    ptr = str;

    while (*ptr)
    {
        printf("%p\n", (void *)&ptr);
        ptr++;
    }

    printf("------------\n");

    ptr = str;
    printf("%c\n", *ptr);
    printf("%c\n", *ptr + 2);

    printf("------------\n");

    char str1[] = "zouhair";
    ptr = str1;

    for (int i = 0; i < 3; i++)
    {
        printf("%c", *(ptr + i));
    }
    printf("\n");
    printf("%c\n", *(ptr + 3));
    printf("%s\n", ptr + 3);

    printf("-------------\n");

    ptr = str1;
    *(ptr + 3) = 'g';
    printf("%s\n", ptr);

    printf("======================\n");
    printf("======================\n");
    printf("======================\n");
    char string[] = "hello, world";
    printf("%c\n", str[0]);
    printf("%s\n", str);
    printf("-------------\n");

    printf("%p\n", &str[0]);
    printf("%p\n", &str);
    printf("%p\n", &str[1]);

}

