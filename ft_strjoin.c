#include <stdio.h>
#include <stdlib.h>
int ft_strlen(char const *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return i;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i,t;

	i = 0;
	t = ft_strlen(s1)+ ft_strlen(s2);
	ptr = (char *)malloc((t+1)*sizeof(char));
	if(ptr == 0)
		return (0);
	i=0;
	while (i < t)
	{
		if(i<ft_strlen(s1))
			ptr[i] =s1[i];
		else
			ptr[i] = s2[i-ft_strlen(s1)];
		i++;
	}
	ptr[i] = 0;
	return ptr;
}
// int main(void)
// {
// 	char *res;
// 	char *s1 = "hola ";
// 	char *s2 = "mundo 1";

// 	res = ft_strjoin(s1,s2);
// 	printf("primero: %s\n",s1);
// 	printf("segundo: %s\n",s2);
// 	printf("final: %s\n",res);
// 	free(res);
// 	return 0;
// }