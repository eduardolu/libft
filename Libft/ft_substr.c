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
	{
		ptr = ft_strdup("");
		return (ptr);
	}
	if (ft_strlen(s + start) < len)
		len = (ft_strlen(s + start));
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
