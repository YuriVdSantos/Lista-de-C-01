/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:35:37 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/27 19:50:59 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
		{
			return (0);
		}

		i++;
	}
	return (1);
}
int	main(void)
{
	ft_str_is_alpha("aBe7cR");
	return (0);
}
