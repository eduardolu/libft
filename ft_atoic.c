#include <stdio.h>
#include <stdlib.h>
int		ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				sig;

	sig = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' ||
			str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sig = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sig * num));
}
// int	main(void)
// {
// 	char	in[]="----1432";

// 	printf("%d\n",ft_atoi(in));
// 	printf("%d\n",atoi(in));
// 	return (0);
// }