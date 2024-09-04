/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:05:28 by yvieira-          #+#    #+#             */
/*   Updated: 2024/09/02 10:19:45 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// int	main(void)
// {
// 	unsigned int num = 50;
// 	char fonte[] = "yurinbbyurinbbyurinbbyurinbb fj ";
// 	char destino[9] = "";
// 	printf("String fonte: %s\n", fonte);
// 	printf("String destino: %s\n\n", destino);

// 	ft_strncpy(destino, fonte, num);

// 	printf("String destino após a cópia ser realizada:\n");
// 	printf("%s\n", destino);
// }