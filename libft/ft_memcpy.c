#include "libft.h"
void* ft_memcpy(void *restrict dst,const void *restrict src, size_t n)
{
    size_t index;

    if(dst == src || !n)
        return dst;
    index = 0;
    while(index < n)
    {
        *(char*)(dst + index) = *(char*)(src + index);
        index++;
    }
    return dst;
}