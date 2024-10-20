#include "libft.h"
#include <stdio.h>
static int exist_set(char c, const char *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

static int count_sets(const char *str, const char *set)
{
    int i;
    int c;

    i = 0;
    c = 0;
    while (exist_set(str[i], set))
    {
        c++;
        i++;
    }
    while (str[i])
    {
        i++;
    }
    i--;
    while (exist_set(str[i], set))
    {
        c++;
        i--;
    }
    return (c);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *res;
    int i;
    int k;
    int len;
    int last;

    if (!s1 || set[0] == '\0')
        return (0);
    i = 0;
    k = 0;
    last = ft_strlen(s1);
    len = last - count_sets(s1, set);
    res = (char *)malloc(len + 1);
    if (len == 0)
        return "";
    if (!res)
        return (0);
    while (exist_set(s1[i], set))
        i++;
    while (k < len)
    {
        res[k] = s1[i];
        k++;
        i++;
    }
    res[k] = '\0';
    return (res);
}
int main()
{
    char *result;

    // Test case 1: Basic trim
    result = ft_strtrim("   Hello, World!   ", " ");
    printf("Trimmed: \"%s\"\n", result); // Expected: "Hello, World!"
    free(result);                        // Free the allocated memory

    // Test case 1: Basic trim
    result = ft_strtrim("hhheeloohhh", "h");
    printf("Trimmed: \"%s\"\n", result); // Expected: "Hello, World!"
    free(result);                        // Free the allocated memory

    // Test case 2: Trim with specific characters
    result = ft_strtrim("!!!Hello!!!", "!");
    printf("Trimmed: \"%s\"\n", result); // Expected: "Hello"
    free(result);

    // Test case 3: No trim needed
    result = ft_strtrim("NoTrimHere", " ");
    printf("Trimmed: \"%s\"\n", result); // Expected: "NoTrimHere"
    free(result);

    // Test case 4: Empty string
    result = ft_strtrim("", " ");
    printf("Trimmed: \"%s\"\n", result); // Expected: ""
    free(result);

    return 0;
}