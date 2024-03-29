/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:18:14 by zlu               #+#    #+#             */
/*   Updated: 2023/09/11 18:32:33 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))
		if (!(c >= '0' && c <= '9'))
			return (0);
	return (1);
}
//int	main (void)
//{
//	int	res;
//    int fin;
//    res = 'd';
// 	fin = ft_isalnum(res);
//    printf("resuntado es %d", fin);
//    fin = isalnum(res);
// 	printf("resuntado es %d", fin);
//    return (0);
//}
