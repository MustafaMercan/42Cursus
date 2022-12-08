#include "libft.h"
char* ft_strchr(const char *s, int c)
{
    int index;

    index = 0;
    if(!s)
        return NULL;

    while(s[index])
    {
        if(s[index] == (char)c)
            return ((char*)(s + index));
        index++;
    }
    if(s[index] == (char)c)
        return ((char*)(s+index));
    return NULL;
}