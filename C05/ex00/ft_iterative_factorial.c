/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:25:50 by yvieira-          #+#    #+#             */
/*   Updated: 2024/09/02 17:07:51 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_interative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else
	{
		ft_interative_factorial(nb -1);
		
	}
}