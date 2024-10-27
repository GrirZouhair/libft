#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t lens;
    size_t i;
    size_t j;
    char *str;

    i = 0;
    j = 0;
    if (!s1 && !s2)
        return (NULL);
    if (!s1)
        return (ft_strdup(s2));
    if (!s2)
        return (ft_strdup(s1));
    lens = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(lens + 1);
    if (!str)
        return (NULL);
    while (s1[j] != '\0')
        str[i++] = s1[j++];
    j = 0;
    while (s2[j] != '\0')
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}
#include <stdio.h>
int main()
{
    const char s1[] = "zouhair";
    const char s2[] = "grir";
    printf("%s", ft_strjoin(s1, s2));
}