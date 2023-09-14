/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:38:04 by zlu               #+#    #+#             */
/*   Updated: 2023/09/12 17:38:06 by zlu              ###   ########.fr       */
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
			return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
//int main (void)
//{
//	char a[]="hola que tal";
//	char b[]="ta";
//	int i=10;
//	printf("%s\n",strnstr(a,b,i));
//	printf("%s\n",ft_strnstr(a,b,i));
//	return (0);
//}
