#include "minitalk.h"
int	ft_atoi(const char *str)
{
	int	iter;
	int	result;

	iter = 0;
	result = 0;
	while ((str[iter] >= '\t' && str[iter] <= '\r') || str[iter] == ' ')
		iter++;
	while (str[iter] >= '0' && str[iter] <= '9' && str[iter] != '\0')
		result = ((str[iter++] - '0') + (result * 10));
	return (result);
}

int main(int arg,char** args)
{
    int myPID,index;
    index = 0;

    if(arg == 3)
    {
        myPID= ft_atoi(args[1]);
        kill(myPID,SIGUSR1);
    }
}