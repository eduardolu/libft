/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:18:55 by zlu               #+#    #+#             */
/*   Updated: 2023/09/28 15:19:00 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contdig(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_inicio(char *str, int i)
{
	str[i] = 0;
	if (i == 0)
		str[i] = '0';
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		sig;

	sig = 1;
	if (n < 0)
		sig = (-1);
	i = contdig(n);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_inicio(str, i);
	while (i != 0)
	{	
		if (sig == (-1))
			str[i - 1] = (-1) * (n % 10) + '0';
		else
			str[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (sig == (-1))
		str[i] = '-';
	return (str);
}
