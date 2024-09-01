/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:19:09 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/29 16:00:54 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			s2++;
			s1++;
			i++;
		}
	}
	return (0);
}
// int	main (void)
// {
// 	char s1[] = "Yurir";
// 	char s2[] = "Yurir";
// 	int result = ft_strncmp(s1, s2, 5);
// 	printf("%d", result);
// }