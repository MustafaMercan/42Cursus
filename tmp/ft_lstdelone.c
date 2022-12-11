/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 01:33:09 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/07/30 16:29:27 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "stdio.h"
#include "stdlib.h"
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	
	if (lst)
	{
		//printf("ft_lstdelone -> %s\n",(char*)lst->content);
		del(lst->content);
		lst->next = lst;
		free(lst);
		lst->next = NULL;
		//lst->next = NULL;
	}	
	//printf("ft_lstdelone -> %s\n",(char*)lst->content);
}

void del_test(void* arg1)
{
	free(arg1);
}

#include <string.h>
int main()
{
    t_list **header;

    header = (t_list**)malloc(sizeof(t_list*));

    t_list *test;
    t_list *test2;
	t_list *test3;
	
	

	char *str ;
	
	char *str2;

	char *str3 ;
	char *str4;

	str = malloc(100);
	str2 = malloc(100);
	str3 = malloc(100);
	str4 = malloc(100);

	strcpy(str,"mustafa");
	strcpy(str2,"mercan");
	strcpy(str4,"deneme");
	strcpy(str3,"test");

	*header = ft_lstnew(str);
	
	
	test = ft_lstnew(str2);

	test2 = ft_lstnew(str3);

	test3 = ft_lstnew(str4);

	ft_lstadd_front(header,test);

	ft_lstadd_front(header,test2);

	ft_lstadd_front(header,test3);
	
	void (*asdf)(void *) = &del_test;
	printf("size -> %d\n",ft_lstsize(*header));
	printf("%s\n",(char*)header[0]->next->next->content);
	
	ft_lstdelone(test,asdf);
	
	printf("%s\n",(char*)header[0]->next->content);

	printf("size -> %d",ft_lstsize(*header));


}

