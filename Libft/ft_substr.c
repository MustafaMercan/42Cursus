/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmercan <mmercan@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:12:56 by mmercan           #+#    #+#             */
/*   Updated: 2022/12/13 16:12:57 by mmercan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - start;
	if (len < i)
		i = len;
	if (start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, i + 1);
	return (str);
}
