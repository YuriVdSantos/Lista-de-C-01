/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:43:11 by yvieira-          #+#    #+#             */
/*   Updated: 2024/09/04 15:24:16 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int num;
	int mult;
	char *max = "2147483648";
	char *min = "-2147483648";

	num = 0;
	mult = 1;
	sign = 1;

	
	while (str[i] != '\0')
	{
		// if (str[i] == min[i])
		// {
		// 	write(1, "-2147483648", 11);
		// 	return 0;
		// }
		// if (str[i] == max[i])
		// {
		// 	write (1, "2147483648", 10);
		// 	return 0;
		// }
		if (str[i] == " ") 
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] > '0' && str[i] < '9')
		{
			if(!(str[i] > '0' && str[i] < '9'))
				break;
			
			num += mult * ( str[i] - '0');
			mult *= 10;
			i++;
		}
	}
	return (num);
}

int main (void){
	ft_atoi("25");
}