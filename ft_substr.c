#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc((len+1)*sizeof(char));
	if(ptr == NULL)
		return (0);
	while (i<len)
	{
		ptr[i] = s[start+i];
	}
	ptr[i] = 0;
	return (ptr);
}