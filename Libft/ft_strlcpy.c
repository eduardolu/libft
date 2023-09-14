/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:58:27 by zlu               #+#    #+#             */
/*   Updated: 2023/09/12 12:58:30 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
//int main (void)
//{
//	char a[]="hola que tal";
//	char b[]="adios";
//	int j;
//	j = ft_strlcpy(a,b,7);
//	printf("%s",a);
//	printf("%d",j);

//	char c[]="hola que tal";
//	char d[]="adios";
//	int e;
//	e = strlcpy(c,d,7);
//	printf("%s",c);
//	printf("%d",e);
//	return (0);
//}