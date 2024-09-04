/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:05:58 by yvieira-          #+#    #+#             */
/*   Updated: 2024/09/02 12:43:24 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			s2++;
			s1++;
		}
	}
	return (0);
}
// int	main (void)
// {
// 	char s1[] = "Yurir";
// 	char s2[] = "grhen";
// 	int result = ft_strcmp(s1, s2);
// 	printf("%d", result);
// }