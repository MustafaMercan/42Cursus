/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:39:30 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/10 18:12:47 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>


char* get_data(int fd)
{
    char *tmp;
    char *str;
    int index;
    

    index = 0;
    tmp = (char*)malloc(sizeof(char) * BUFFER_SIZE);
 
    while(read(fd,tmp,BUFFER_SIZE))
    {
        if(!check_eof(tmp))
        {
            str = ft_join(str,tmp);
            empty_str(tmp); 
        }
        else
        {
            str = ft_join(str,tmp);
            empty_str(tmp);
            return str;
        }
    }
    return str;
}
char *get_line(char* str)
{
    int index;
    char *tmp;
    int i;
    
    i = 0;
    index = find_new_line(str);
    tmp = (char*)malloc(sizeof(char) * ft_strlen(str) + 2);
    if(index == -1)
        return str;
        
    while(str[i] && i < index)
    {
        tmp[i] = str[i];
        i++;
    }
    return tmp;
    
}
char *get_next(char *str)
{
    int i;
    int j = 0;
    i = 0;
    
    while(str[i] && str[i] != '\0')
    {
        i++;
    }
    int index;

    index = ft_strlen(str) - i ;
    char *tmp = (char*)malloc(sizeof(char) * index + 1);
    while(str[i + j] && str[i + j] != '\0')
    {
        tmp[j] = str[i + j];
        j++;
    }
    return tmp;
}
char* get_next_line(int fd)
{
    
    static char *line;
    char *str;
    int index;

    /*

    musta
    fa   mer


    */
    
    line = get_data(fd);
    str = get_line(line);
    line = get_next(line);
    //line = ft_join(line,"mustafa");
    
    
    //index = find_new_line(line);
    //line = ft_strdup(line + index + 1);

    
    
    printf("str -> (%s)\n",str);
    printf("line -> (%s)\n",line);
    
    //str = get_line(line);
    return NULL;
}
