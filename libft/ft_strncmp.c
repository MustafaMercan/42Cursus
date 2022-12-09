#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t index;
    index = 0;
    if(n == 0)
        return 0;
    while(s1[index] == s2[index]){
        index++;
    }
    if(s1[index] - s2[index] > 0)
        return 1;
    else if(s1[index] - s2[index] <0)
        return -1;
    
    return 0;
}
