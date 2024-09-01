/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:58:37 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/29 18:23:08 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	int i;
	int pot[12];
	char result[12];

	i = 0;
	*pot = nb;

	while (pot[i])
	{
		result[i] = pot[i] += '0';
		i++;
	}
	i = 0;
	while (result[i] != '\0')
	{
		write(1, &result[i], 1);
		i++;
	}
}

int main(){
	ft_putnbr(42);
}