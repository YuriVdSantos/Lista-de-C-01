/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:22:29 by yvieira-          #+#    #+#             */
/*   Updated: 2024/09/03 15:28:06 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (src[i] && i < nb)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char c[20] = "oi,";
// 	char s[] = " bem?";
// 	char *res = ft_strncat(c, s, 5);
// 	printf("%s", res);
// }