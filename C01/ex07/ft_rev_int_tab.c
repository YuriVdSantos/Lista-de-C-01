/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvieira- <yvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:31:33 by yvieira-          #+#    #+#             */
/*   Updated: 2024/08/22 12:54:22 by yvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	final;
	int	comeco;
	int	reverso;

	final = size -1;
	comeco = 0;
	while (comeco < final)
	{
		reverso = tab[comeco];
		tab[comeco] = tab[final];
		tab[final] = reverso;
		final--;
		comeco++;
	}
}
// int main() {
//     int tab[] = {-1, 2, 0, 4, 5};
//     int size = 5;
//     printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");
//     ft_rev_int_tab(tab, size);
//     printf("Reversed array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");
//     return 0;
// }