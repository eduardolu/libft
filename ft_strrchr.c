/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:10:16 by zlu               #+#    #+#             */
/*   Updated: 2023/09/12 16:10:19 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	c_m;

	c_m = c % 256;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c_m)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
//int main (void)
//{
//	char c[] = "holahola";
//	printf("%p\n", ft_strrchr(c,'h'));
//	printf("%p\n", strrchr(c,'h'));
//	return 0;
//}