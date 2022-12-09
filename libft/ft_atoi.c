#include "libft.h"
int ft_atoi(const char *str)
{
    int sign;
    int value;
    int index;

    sign = 1;
    value = 0;
    index = 0;

    while((str[index] == ' ' ||str[index] == '\n' ||str[index] == '\v' ||
        str[index] == '\r' ||str[index] == '\t' || str[index] == '\f'))
        {
            index++;
        }

        if(str[index] == '-')
            sign*=-1;
        if(str[index] == '-' || str[index]=='+')
            index++;
        while(ft_isdigit(str[index]))
        {
            value = value * 10 + (str[index] - '0');
            index++;
        }
        value *= sign;
       
    return value;

}
