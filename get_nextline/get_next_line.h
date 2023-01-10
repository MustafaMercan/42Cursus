/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:39:32 by mmercan           #+#    #+#             */
/*   Updated: 2023/01/10 17:12:56 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 4
#endif
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

//SİL BUNU UNUTMA LOL
#include <stdio.h>
//SİL BUNU UNUTMA LOL
//SİL BUNU UNUTMA LOL
//SİL BUNU UNUTMA LOL
//SİL BUNU UNUTMA LOL

char* get_next_line(int fd);
bool check_eof(char *str);
int ft_strlen(char *str);
void empty_str(char *str);
int find_new_line(char *str);
char* ft_join(char *str,char *tmp);
char* ft_join2(char *str,char *tmp,int index);
char* ft_strdup(char *str);






#endif
