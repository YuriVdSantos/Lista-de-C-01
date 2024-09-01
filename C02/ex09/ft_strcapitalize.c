/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:02:12 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/28 19:28:23 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_check_st(char *str)
{
	if (*str > 96 && *str < 123)
	{
		*str -= 32;
	}
}

void	ft_check_snd(char *str)
{
	if (*str > 64 && *str < 91)
	{
		*str += 32;
	}
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	ft_check_st(&str[0]);
	i = 1;
	ft_check_snd(&str[1]);
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (!(str[i - 1] > 96 && str[i - 1] < 123))
			{
				if (!(str[i - 1] > 47 && str[i - 1] < 58))
				{
					if (!(str[i - 1] > 64 && str[i - 1] < 91))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
// int main ()
// {
// 	char c[] = "oi, tudo bem? 42palavYUIRras quarenta-e-duas; cinquenta+e+um";
// 	ft_strcapitalize(c);
// 	printf("%s\n", c);
// 	return (0);
// }
