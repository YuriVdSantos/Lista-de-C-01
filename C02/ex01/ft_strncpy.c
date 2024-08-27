/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:05:28 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/27 13:35:06 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = n;
	while (i != 0 && *src != '\0')
	{
		*dest = *src;
		i--;
		dest++;
		src++;
	}
	while (n != 0)
	{
		*dest = '\0';
		n--;
	}
	return (0);
}
// int	main()
// {
// 	unsigned int num = 6;
// 	char fonte[6] = "123456";
// 	char destino[9] = "123456789";
// 	printf("String fonte: %s\n", fonte);
// 	printf("String destino: %s\n\n", destino);

// 	ft_strncpy(destino, fonte, num);

// 	printf("String destino após a cópia ser realizada:\n");
// 	printf("%s\n", destino);

// }