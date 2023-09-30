/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:23:41 by zlu               #+#    #+#             */
/*   Updated: 2023/09/11 15:23:44 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	return (0);
}
//int	main (void)
//{ 	
//	int	res;
//    int fin;
//    res = "123";
// 	fin = ft_isprint(res);
//    printf("resuntado es %d\n", fin);
//    fin = isprint(res);
// 	printf("resuntado es %d", fin);
//    return (0);
//}