/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:25:10 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/30 14:45:49 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
// int main (){
// 	char texto[] = "Olá, mundo! Este é um exemplo.";
//     char palavra[] = "mundo";
//     char *resultado = ft_strstr(texto, palavra);
//     if (resultado != NULL) {
//         printf("%s\n%s", palavra, resultado);
//     } else {
//         printf("A palavra '%s' não foi encontrada.\n", palavra);
//     }
//     return (0);
// }