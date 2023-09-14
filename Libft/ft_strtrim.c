/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:07:25 by zlu               #+#    #+#             */
/*   Updated: 2023/09/14 12:07:27 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	char	*res = "encontre";

	i = 0;
	while (ft_strlen(ft_strnstr(s1,set,ft_strlen(s1))) != 0)
	{
		break;
	}
	return res;
}

//int main (void)
//{
//	char *s1 = "hola que tal";
//	char *s2 = "ta";

//	printf("resultado: %s \n", ft_strtrim(s1,s2));
//}