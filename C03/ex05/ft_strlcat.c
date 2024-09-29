




int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ld;
	unsigned int	ls;
	
	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	j = 0;
	i = ld;
	if(ld >= size)
	{
		return (ld + ls);
	}
	while(i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ld + ls);
}
