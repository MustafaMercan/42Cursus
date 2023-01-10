/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:39:34 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/10 17:50:01 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    if(!str)
        return 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
bool check_eof(char *str)
{
    int i;

    i = 0;
    if(ft_strlen(str) == 0)
        return false;
    while(str[i] != '\0')
    {
        if(str[i] == '\n')
            return true;
        i++;
    }
    return false;
}
void empty_str(char *str)
{
    int i;

    i = 0;
    if(!str)
        return ;
    while(str[i] != '\0')
    {
        str[i] = '\0';
        i++;
    }
}
int find_new_line(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '\n')
            return i;
        i++;
    }
    return -1;
}
char* ft_strdup(char *str)
{
    char *tmp;
    int i;
    int index;

    i = 0;
    index = ft_strlen(str);
    tmp = (char*)malloc(sizeof(char) * index + 1);
    if(!str)
        return NULL;
    
    while(i < index)
    {
        tmp[i] = str[i];
        i++;
    }
    tmp[i] = '\0';
    return tmp;
}
char* ft_join(char *str,char *tmp)
{
    char *res;
    int i;
    int j;

    

    i = 0;
    j = 0;
    if(str == NULL)
    {
        
        return ft_strdup(tmp);
    }
    else
    {
        res = (char*)malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(tmp)) + 1);
        while(str[i] != '\0' && str[i])
        {
            res[i] = str[i];
            i++;
        }
        while(tmp[j] != '\0' && tmp[j])
        {
            res[i + j] = tmp[j];
            j++;
        }
        res[i + j] = '\0';
        
        return res;
    }
}
char* ft_join2(char *str,char *tmp,int index)
{
    char *res;
    int i;
    int j;

    i = 0;
    j = 0;
    
    res = (char*)malloc(sizeof(char) * (ft_strlen(str) + index) + 1);
    while(str[i] != '\0' && str[i])
    {
        res[i] = str[i];
        i++;
    }
    while(tmp[j] != '\0' && tmp[j] && j < index)
    {
        res[i + j] = tmp[j];
        j++;
    }
    res[i + j] = '\0';
    printf("res -> %s res -> %s\n",str,tmp);
    return res;
}