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
	size_t	i;

	i = 0;
	ptr = (char *)malloc((len+1)*sizeof(char));
	if(ptr == NULL)
		return (0);
	while (i<len)
	{
		ptr[i] = s[start+i];
	}
	ptr[i] = 0;
	return (ptr);
}
