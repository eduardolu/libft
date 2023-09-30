/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:56:20 by zlu               #+#    #+#             */
/*   Updated: 2023/09/11 15:56:23 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
//int	main (void)
//{ 	
//    int fin;
// 	fin = ft_strlen("hola");
//    printf("resuntado es %d\n", fin);
//    fin = strlen("hola");
// 	printf("resuntado es %d", fin);
//    return (0);
//}