/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:07:37 by zlu               #+#    #+#             */
/*   Updated: 2023/09/14 12:07:39 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = (ft_strlen(s + start));
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
//size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
//{
//	size_t	i;

//	i = 0;
//	if (dstsize != 0)
//	{
//		while (src[i] != '\0' && i < dstsize - 1)
//		{
//			dst[i] = src[i];
//			i++;
//		}
//		dst[i] = '\0';
//	}
//	while (src[i] != '\0')
//	{
//		i++;
//	}
//	return (i);
//}
//size_t	ft_strlen(const char *s)
//{
//	size_t	i;

//	i = 0;
//	while (s[i])
//	{
//		i++;
//	}
//	return (i);
//}
//int main (void)
//{
//	char *res;

//	res = ft_substr("", 1, 1);
//	printf("resultado: %s",res);
//}