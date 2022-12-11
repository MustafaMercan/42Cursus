/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 01:25:49 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/07/30 16:29:44 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include "stdio.h"
#include "stdlib.h"
int main()
{
    t_list **header;
    header = (t_list**)malloc(sizeof(t_list*));
    t_list *test;
    t_list *test2;
	t_list *test3;
	char str[] = "mustafa";
	char str2[] = "mercan";
	char str3[] = "test";
	*header = ft_lstnew(str);
	test = ft_lstnew(str2);
	test2 = ft_lstnew(str3);
	ft_lstadd_front(header,test);
	ft_lstadd_front(header,test2);
	test3 = ft_lstlast(*header);

	printf("size -> %s",test3->content);
}
*/