#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int word_counts(char *str)
{
	int index = 0;
	int count = 0;
	int flag = 0;

	while(str[index] != '\0')
	{
		if(flag == 0)
		{
			count++;
			flag = 1;
		}
		if((str[index] == 32)||(str[index] == 10)||(str[index] == 9))
		{
			flag = 0;
		}
		index++;
	}

	return count;
}

char *ft_strdup(char *str, int start_index, int last_index)
{
	int size = last_index - start_index;
	int i = 0;

	char *new_str = (char*) malloc((sizeof(char) * size) + 1);

	while(i < size)
	{
		new_str[i] = str[start_index];
		i++;
		start_index++;
	}
	new_str[i] = '\0';


	return new_str;

}
char ** ft_split(char *str)
{

	int count = word_counts(str);
	int index = 0;


	char **split = (char**)malloc(sizeof(char*) * (count + 1));

	int last_index = 0;
	int word_index = 0;
	int flag = 0;

	while(str[index] != '\0')
	{
		last_index = index;
		while(str[last_index] != ' ' && str[last_index] != '\n' && str[last_index] != '\t' && str[last_index] != '\0')
		{
			last_index++;
			flag = 1;
		}
		//index = last_index;
		if(flag == 1)
		{
			split[word_index] = ft_strdup(str,index,last_index);
			word_index++;
			flag = 0;
			index = last_index;
		}
		//split[word_index] = ft_strdup(str,index,last_index);
		//word_index++;
		//index = last_index;
		if(str[index] != '\0')
			index++;
	}

	split[word_index] = NULL;
	return split;
}



/*
int main(int arg, char**args)
{

	//char str[100] = "three words apart";
	
	//printf("%d - %d ",');,
	
	//printf("test-> %s",args[1]);
	char **my_split = ft_split(args[1]);
	//ft_split(args[1]);
	
	int index = 0;
	while(index < 4)
	{
		printf("test -> %s\n",my_split[index]);
		index++;
	}	
	return 0;

}*/
