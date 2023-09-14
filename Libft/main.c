#include "libft.h"

int main(void)
{
    char *res;
 	char *s1 = "hola ";
 	char *s2 = "mundo 1";

 	res = ft_strjoin(s1,s2);
 	printf("primero: %s\n",s1);
 	printf("segundo: %s\n",s2);
 	printf("final: %s\n",res);
 	free(res);
 	return 0;
}