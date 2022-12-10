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
	printf("ft_lstdelone -> %s\n",(char*)lst->content);
	if (lst)
	{
		del(lst->content);
		free(lst);
	}	
	printf("ft_lstdelone -> %s\n",(char*)lst->content);
}

void del_test(void* arg1)
{
	
}


int main()
{
    t_list **header;

    header = (t_list**)malloc(sizeof(t_list*));

    t_list *test;
    t_list *test2;
	//t_list *test3;
	
	

	char str[] = "mustafa";
	

	char str2[] = "mercan";

	char str3[] = "test";

	*header = ft_lstnew(str);
	
	
	test = ft_lstnew(str2);

	test2 = ft_lstnew(str3);

	ft_lstadd_front(header,test);

	ft_lstadd_front(header,test2);
	
	void (*asdf)(void *) = &del_test;
	//printf("size -> %d\n",ft_lstsize(*header));
	printf("%s\n",(char*)header[0]->next->next->content);
	
	ft_lstdelone(test,asdf);
	
	printf("%s\n",(char*)header[0]->next->content);

	//printf("size -> %d",ft_lstsize(*header));


}

