/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:04:03 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/18 16:53:53 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)

{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>
int	main()
{
    // Testes com diferentes valores de nb e power
    printf("3^4 = %d\n", ft_iterative_power(3, 4));   // Esperado: 81
    printf("2^5 = %d\n", ft_iterative_power(2, 5));   // Esperado: 32
    printf("5^0 = %d\n", ft_iterative_power(5, 0));   // Esperado: 1
    printf("0^0 = %d\n", ft_iterative_power(0, 0));   // Esperado: 1
    printf("-2^3 = %d\n", ft_iterative_power(-2, 3)); // Esperado: -8
    printf("2^-3 = %d\n", ft_iterative_power(2, -3)); // Esperado: 0
	return 0;
}*/
