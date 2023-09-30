/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:08:28 by zlu               #+#    #+#             */
/*   Updated: 2023/09/11 19:08:32 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_c;
	char	*src_c;

	dst_c = (char *)dst;
	src_c = (char *)src;
	if (len > 256 || (!dst_c && !src_c))
		return (0);
	if (ft_strlen(dst_c) < ft_strlen(src_c))
	{
		while (len--)
			dst_c[len] = src_c[len];
	}
	else
		ft_memcpy(dst_c, src_c, len);
	return (dst_c);
}
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
//void	*ft_memcpy(void *dst, const void *src, size_t n)
//{
//	size_t		i;
//	char		*dst_c;
//	char		*src_c;
//	dst_c = (char *)dst;
//	src_c = (char *)src;
//	i = 0;
//	if(!dst_c && !src_c)
//		return (0);
//	while ( (i < n))
//	{
//		dst_c[i] = src_c[i];
//		i++;
//	}
//	return (dst_c);
//}
//int main(){
//  //char a[]="hare rama hare rama";
//  	//char *s="lorem ipsum dolor sit amet";
//	//char *x="lorem ipsum dolor sit amet";
//	//int i = 2;
//	int size = 10;
// 	char *dst = (char *)malloc(sizeof(char) * size);
// 	char *data = (char *)malloc(sizeof(char) * size);
//	//char *src = s+5;
//	//char b[]="0123456789";
//	//char c[]="0123456789";
//	ft_memmove(dst, data, size);
//	printf("bien %s.\n",dst);
//	memmove(dst, data, size);
//	printf("bien %s.\n",dst);
//	free(dst);
//	free(data);
//}