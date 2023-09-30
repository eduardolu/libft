/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:35:57 by zlu               #+#    #+#             */
/*   Updated: 2023/09/11 17:35:59 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s_c;

	s_c = (char *)s;
	i = 0;
	while (i < n)
	{
		s_c[i] = '\0';
		i++;
	}
}
//int main (void)
//{
	//char a[]="hola";
	//char b[]="adios";
	//printf("%s",a);
	//bzero(a+2,4);
	//printf("%s",a);
	//printf("%s",b);
	//ft_bzero(b+2,4);
	//printf("%s",b);
//}
