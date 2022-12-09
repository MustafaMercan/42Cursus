#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Mustafamercanahaha";
    char str2[100] = "Emirhanahah";
    ft_memcpy(str,str2,3);
    printf("%s\n",str);
}
