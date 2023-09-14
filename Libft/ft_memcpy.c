/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:35:46 by zlu               #+#    #+#             */
/*   Updated: 2023/09/11 17:35:48 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
//int main(void)
//{
//  char b[]="0123456789";
//  char c[]="0123456789";
//  memcpy(b+2,b,10);
//  puts(b);
//  ft_memcpy(c+2,c,10);
//  puts(c);
//}