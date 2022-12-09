#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    size_t index;

    index = 0;
    while(index < n)
    {
        ((unsigned char*)s)[index] = c;
        index++;
    }
    return s;

}
