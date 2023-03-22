//#include <unistd.h>
int		is_power_of_2(unsigned int n)
{
	unsigned int num;

	if(n ==  0)
		return 0;
	if(n == 1)
		return 1;
	
	num = n;

	while(num != 1)
	{
		if(num % 2 != 0)
			return 0;
		num = num /  2;
	}

	return 1;

}

/*
#include <stdio.h>
int main()
{
	printf("test -> %d",is_power_of_2(256));


}*/
