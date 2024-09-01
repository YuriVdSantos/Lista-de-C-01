/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:50:24 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/28 19:29:36 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] <= 123)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
// int	main(void)
// {
// 	char c[] = "hfksd";
// 	ft_strupcase(c);
// 	printf("%s\n", c);
// 	return (0);
// }