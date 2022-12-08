#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		index;

	if (dest == src || !n)
		return (dest);
	index = 0;
	if (dest < src)
	{
		while (index < n)
		{
			*((char *)dest + index) = *((char *)src + index);
			index++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dest + n - 1) = *((char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}