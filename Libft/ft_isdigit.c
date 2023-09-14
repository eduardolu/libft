/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:53:56 by zlu               #+#    #+#             */
/*   Updated: 2023/09/11 12:54:02 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
//int	main (void)
//{ 	
//	int	res;
//    int fin;
//    res = 9;
// 	fin = ft_isdigit(res);
//    printf("resuntado es %d", fin);
//    fin = isdigit(res);
// 	printf("resuntado es %d", fin);
//    return (0);
//}