/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:56:01 by zlu               #+#    #+#             */
/*   Updated: 2023/09/11 15:56:03 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	s;
	char	*b_c;

	b_c = (char *)b;
	s = c;
	i = 0;
	while ((b_c[i]) && (i < len))
	{
		b_c[i] = s;
		i++;
	}
}
//int main(void)
//{
//    char str[50];
//    strcpy(str,"This is string.h library function");
//    puts(str);
//    ft_memset(str,'i',6);
//    puts(str);  
//    return 0;
//}