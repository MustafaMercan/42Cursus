#include "libft.h"
#include <stdio.h>
size_t ft_strlcpy(char *restrict dst, const char *restrict src,size_t dstsize)
{
    size_t index;
    size_t count;

    index = 0;
    count = 0;
    
    if(!dst || !src)
        return 0;
    while(src[count++]){ }
    
    while(src[index] != '\0' && index + 1 < size)
    {
        dest[index] = src[index];
        index++;
    }
    if(size)
        dest[index] = '\0';
    
    return(count);
}