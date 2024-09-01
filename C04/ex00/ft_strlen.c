/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:06:23 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/29 16:17:05 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return (i);
}
int main()
{
	int result = ft_strlen("");
	printf("%d",result);
}