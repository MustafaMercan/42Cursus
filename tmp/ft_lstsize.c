#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int    ft_lstsize(t_list *lst)
{
    int    ret;
    ret = 0;
    while (lst->next != NULL && ++ret)
    {
      lst = lst->next;
    }
    return (ret);
}
/*
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
	char str4[] = "asda";
	*header = ft_lstnew(str);
	test = ft_lstnew(str2);
	test2 = ft_lstnew(str3);
	test3 = ft_lstnew(str4);
	ft_lstadd_front(header,test);
	ft_lstadd_front(header,test2);
	ft_lstadd_front(header,test3);
	printf("size -> %d\n",ft_lstsize(*header));
	printf("last -> %s\n",ft_lstlast(*header)->content);
}*/
