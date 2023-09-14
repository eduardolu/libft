#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(count * size);
	if (ptr== 0)
		return (0);
	while (i < size * count)
    {
		ptr[i] = 0;
        i++;
    }
	return (ptr);
}
// int	main (void)
// {
//     char *ptr;

// 	ptr = ft_calloc(5,8);
//     printf("memoria es: %p\n",ptr);
//     free(ptr);
//     return (0);
// }