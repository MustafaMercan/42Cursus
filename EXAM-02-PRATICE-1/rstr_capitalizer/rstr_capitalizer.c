#include <unistd.h>
int ft_strlen(char *str)
{
	int index = 0;
	while(str[index] != '\0')
	{
		index++;
	}
	return index;
}
void all_letter_smaller(char *str)
{
	int index = 0;

	while(str[index] != '\0')
	{
		if(str[index] >= 'A' && str[index] <='Z')
		{
			str[index]+=32;
		}
		index++;
	}
}
int check_valid(char *str, int index)
{
	if(str[index] == ' ' || str[index] == '\t' || str[index] == '\0') 
	{
		if((index - 1) >= 0)
		{
			if((str[index-1] >= 'A' && str[index-1] <= 'Z')  || (str[index-1] >= 'a' && str[index-1] <= 'z'))
				return 1;
		}
	}
	return 0;
}
void my_function(char *str)
{

	int index = 0;

	all_letter_smaller(str);
	while(str[index] != '\0')
	{
		if(check_valid(str,index))
		{
			str[index-1] = str[index-1] - 32;
		}
		index++;
	}
	if(str[index] == '\0')
	{
		if(check_valid(str,index))
		{
			str[index-1] -= 32;
		}
	}

	write(1,str,ft_strlen(str));
}




int main (int arg, char **args)
{
	
	int index = 1;
	
	if(arg == 1)
		write(1,"\n",1);
	else
	{
		while(index < arg)
		{
			my_function(args[index]);
			write(1,"\n",1);
			index++;
		}

	}

	return 0;
}
