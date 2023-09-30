/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:09:25 by zlu               #+#    #+#             */
/*   Updated: 2023/09/12 16:09:29 by zlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	c_m;

	c_m = c % 256;
	i = 0;
	while (s[i])
	{
		if (s[i] == c_m)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c_m)
		return ((char *)&s[i]);
	return (0);
}
//int main (void)
//{
//	char c[] = "hota";
//	printf("%p\n", ft_strchr(c, '\n'));
//	printf("%p\n", strchr(c, '\n'));
//	return 0;
//}