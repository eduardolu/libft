/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:07:25 by zlu               #+#    #+#             */
/*   Updated: 2023/09/14 12:07:27 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (i < len - 1)
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] && len > (i + j + 1))
			{
				if (haystack[i + j] != needle[j])
					return (0);
				j++;
			}
			return ((char*)&haystack[i]);
		}
		i++;
	}
	return (0);
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
void	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_c;
	char		*src_c;

	dst_c = (char *)dst;
	src_c = (char *)src;
	i = 0;
	while ((src_c[i]) && (i < n))
	{
		dst_c[i] = src_c[i];
		i++;
	}
}
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
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	int		z;

	i = 0;
	j = 0;
	z = 0;
	while (dst[j] != '\0' && j < dstsize)
		j++;
	while (src[i] != '\0')
		i++;
	if (j == dstsize)
		return (i + dstsize);
	while (src[z] != '\0' && j + z < dstsize - 1)
	{
		dst[j + z] = src[z];
		z++;
	}
	dst[j + z] = '\0';
	return (j + i);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i,x;
	char	*res;
	char	*aux;
	char	*s1_c;
	
	s1_c = s1;
	x = 1;
	//aux = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	res = ft_strnstr(s1_c,set,ft_strlen(s1));
	printf("res_p: %p.\n", res);
	aux = s1_c;
	printf("aux_P: %p.\n", aux);
	if(res == NULL)
		return ((char*)s1);
	while (res != 0)
	{
		i=res-aux;
		printf("primero dentro: %d.\n", i);
		ft_strlcpy(aux,s1,i);
		printf("aux1: %s.\n", aux);
		ft_strlcat(aux,s1+i+ft_strlen(set),ft_strlen(s1)-ft_strlen(set));
		printf("aux: %s.\n", aux);
		res = ft_strnstr(aux,set,ft_strlen(s1));
		printf("otra vez: %s.\n", res);
	}
	return aux;
}
int main (void)
{
	char *s1 = "hola mundo hola pepe hola juan";
	char *s2 = "mundo";
	char *res;

	res=ft_strtrim(s1,s2);
	printf("resultado: %s \n", res);
	//free(res);
}