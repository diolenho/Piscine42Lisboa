/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:19:43 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/18 16:52:33 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
int	main()
{
    // Testes com diferentes valores de nb e power
    printf("3^4 = %d\n", ft_recursive_power(3, 4));   // Esperado: 81
    printf("2^5 = %d\n", ft_recursive_power(2, 5));   // Esperado: 32
    printf("5^0 = %d\n", ft_recursive_power(5, 0));   // Esperado: 1
    printf("0^0 = %d\n", ft_recursive_power(0, 0));   // Esperado: 1
    printf("-2^3 = %d\n", ft_recursive_power(-2, 3)); // Esperado: -8
    printf("2^-3 = %d\n", ft_recursive_power(2, -3)); // Esperado: 0

    return 0;
}*/
