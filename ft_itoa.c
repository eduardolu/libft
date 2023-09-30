/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:18:55 by zlu               #+#    #+#             */
/*   Updated: 2023/09/28 15:19:00 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contdig(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_inicio(char *str, int i)
{
	str[i] = 0;
	if (i == 0)
		str[i] = '0';
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		sig;

	sig = 1;
	if (n < 0)
		sig = (-1);
	i = contdig(n);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_inicio(str, i);
	while (i != 0)
	{	
		if (sig == (-1))
			str[i - 1] = (-1) * (n % 10) + '0';
		else
			str[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (sig == (-1))
		str[i] = '-';
	return (str);
}
//int main (void)
//{
////	char *res;
//	//res = ft_itoa(0);
//	//printf("resultado: %s\n",res);
//	//free(res);
//	char *i1 = ft_itoa(9);
// 	char *i2 = ft_itoa(-650);
// 	char *i3 = ft_itoa(-0);
// 	if (strcmp(i1, "9"))
// 	{
// 		printf("9 = %s.\n", i1);
// 	}
// 	if (strcmp(i2, "-650"))
// 	{
// 		printf("-10 = %s.\n", i2);
// 	}
// 	if (strcmp("0", i3))
// 	{
// 		printf("KO3");
// 	}
//	printf("TAMAÑO %d\n", strlen(i1));
//	printf("9 = %s.\n", i1);
//	printf("TAMAÑO %d\n", strlen(i2));
//	printf("-650 = %s.\n", i2);
//	printf("TAMAÑO %d\n", strlen(i3));
//	printf("0 = %s.\n", i3);
//	free(i1);
//	free(i2);
//	free(i3);
//	return (0);
//	int size;
// 	res = ft_itoa(0);
// 	size = get_last_malloc_size();
// 	if (size == 2)
// 		printf("OK");
// 	printf("KO");
//	free(res);
//	return (0);
//}