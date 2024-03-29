/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:38:37 by zlu               #+#    #+#             */
/*   Updated: 2023/09/12 16:38:39 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_c;

	s_c = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s_c[i] == (char)c)
			return (&s_c[i]);
		i++;
	}
	return (0);
}
//int main (void)
//{
//	char s[] = "hala como estais";
//	printf("%s\n", ft_memchr(s,'o',0));
//	printf("%s\n", memchr(s,'o',0));
//	return (0);
//}