/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:58:53 by hbaddrul          #+#    #+#             */
/*   Updated: 2021/11/21 20:37:54 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (!s)
		return (0);
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (0);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		++i;
	}
	ret[i] = 0;
	return (ret);
}
char test(unsigned int n,char ch)
{
	ch+=10;
	return ch;
}
void func(int a)
{
	print (a);
}


#include <stdio.h>
int main()
{
	char str[] = "MustafaMercan";
	char *ptr;
	int num = 333;
	func(num);

	char(*mustafa)(unsigned int,char) = &test;

	ptr = ft_strmapi(str,test2);
	printf("%s\n",ptr);
}