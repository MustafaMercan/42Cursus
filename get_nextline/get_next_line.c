/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:39:30 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/10 17:49:00 by mmercan          ###   ########.fr       */
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

    index = find_new_line(str);
    if(index == -1)
        return str;
    tmp = ft_join2(tmp,str,index);
    printf("tmp -> (%s)\n",tmp);
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
    //line = ft_join(line,"mustafa");
    str = get_line(line);
    
    index = find_new_line(line);
    line = ft_strdup(line + index + 1);

    
    
    printf("str -> (%s)\n",str);
    printf("line -> (%s)\n",line);
    
    //str = get_line(line);
    return NULL;
}
