#include "libft.h"
size_t ft_strlcpy(char *restrict dst, const char *restrict src,size_t dstsize)
{
    size_t index;
    size_t count;

    index = 0;
    count = 0;
    
    if(!dst || !src)
        return 0;
    while(src[count++]){ }
    
    while(src[index] != '\0' && index + 1 < dstsize)
    {
        dst[index] = src[index];
        index++;
    }
    if(dstsize)
        dst[index] = '\0';
    
    return(count);
}