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

void	ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		aux[len];
	char		*dst_c;
	char		*src_c;

	dst_c = (char *)dst;
	src_c = (char *)src;
	i = 0;
	while (src_c[i])
	{
		aux[i] = src_c[i];
		i++;
	}
	i = 0;
	while ((src_c[i]) && (i < len))
	{
		dst_c[i] = aux[i];
		i++;
	}
}
//int main(){
//  //char a[]="hare rama hare rama";
//  char b[]="0123456789";
//  char c[]="0123456789";
//  memmove(b+2,b,7);
//  puts(b);
//  ft_memmove(c+2,c,7);
//  puts(c);
//}