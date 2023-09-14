/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:25:25 by zlu               #+#    #+#             */
/*   Updated: 2023/09/11 13:25:28 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (!(c <= 0 && c >= 127))
		return (1);
	return (0);
}
//int	main (void)
//{ 	
//	int	res;
//    int fin;
//    res = '';
// 	fin = ft_isascii(res);
//    printf("resuntado es %d", fin);
//    fin = isascii(res);
// 	printf("resuntado es %d", fin);
//    return (0);
//}