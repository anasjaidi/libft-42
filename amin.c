#include <stdio.h>


char *ft_word(int start, int end ,  char *str)
{
    int i = -1;
    int size = end - start + 1;
    char    *ptr = malloc(size * sizeof(char));
    while (start < end)
    {
        ptr[++i] = str[start];
    }
    
}
int ft_count(char *str, char c)
{
    int i  = 0;
    j = 0;
    while (str[i])
    {
        ifq
    }
    
}

char **splt(char *str, char sep , int size)
{
    char **r;
    r = malloc(size * sizeof(char *) + 1);
    int i = 0;
    int j = 0;
    int a = -1;
    while (str[i])
    {
        if (str[i] == sep)
        {
            i++;
            continue ;
        }
        j = i;
        while (str[j] != sep)
            j++;
        r[++a] = ft_word( i , j , str);
        i = j;
    }
    r[size - 1] = 0;
    return (r);
}

char    **ft_split(char *str, char sep)
{
    char    **r;
    int size = ft_count(str, sep);
    if (sep == '\0')
    {
        r = (char **)malloc(2  * sizeof(char*));
        r[0] = str;
        r[1] = NULL;
        return (r);
    }
    r = (char **)malloc(size * sizeof(char *)  +1);
    r = splt(str, sep , size);
    return r;    
}