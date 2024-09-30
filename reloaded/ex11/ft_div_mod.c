/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:13:19 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/22 12:24:24 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
// 	int a = 10;
// 	int b = 5;
// 	int *div;
// 	int *mod;
// 	ft_div_mod(a,b, &div, &mod);
// 	printf("%d \n", div);
// 	printf("%d \n", mod);
// }