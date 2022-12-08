size_t ft_strlcat(char *restrict dst, const char *restrict src,size_t dstsize)
{
    	int		i;
	int		j;
	size_t	length;

	length = ft_strlen(dst);
	if (size > 0 && size > length)
	{
		i = length;
		j = 0;
		while (src[j] && i < (int)size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (length + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}