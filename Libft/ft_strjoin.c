/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:07:10 by zlu               #+#    #+#             */
/*   Updated: 2023/09/14 12:07:12 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//int ft_strlen(char const *s)
//{
//	int i;

//	i = 0;
//	while (s[i])
//		i++;
//	return i;
//}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	size_t			i,t;
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len = ft_strlen(s2);

	i = 0;
	t = s1_len + s2_len;
	ptr = (char *)malloc((t + 1) * sizeof(char));
	if (ptr == 0)
		return (0);
	i=0;
	while (i < t)
	{
		if (i < s1_len)
			ptr[i] =s1[i];
		else
			ptr[i] = s2[i - s1_len];
		i++;
	}
	ptr[i] = 0;
	return ptr;
}
