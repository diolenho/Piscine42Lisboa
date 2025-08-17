/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:23:35 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/18 16:52:01 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
int	main()
{
	printf("Fibonacci de -1 = %d\n", ft_fibonacci(-1)); // Esperado: -1
  	printf("Fibonacci de 0 = %d\n", ft_fibonacci(0));   // Esperado: 0
    	printf("Fibonacci de 1 = %d\n", ft_fibonacci(1));   // Esperado: 1
    	printf("Fibonacci de 2 = %d\n", ft_fibonacci(2));   // Esperado: 1
    	printf("Fibonacci de 3 = %d\n", ft_fibonacci(3));   // Esperado: 2
    	printf("Fibonacci de 4 = %d\n", ft_fibonacci(4));   // Esperado: 3
    	printf("Fibonacci de 5 = %d\n", ft_fibonacci(5));   // Esperado: 5
    	printf("Fibonacci de 6 = %d\n", ft_fibonacci(6));   // Esperado: 8
    	printf("Fibonacci de 10 = %d\n", ft_fibonacci(10)); // Esperado: 55

    return 0;
}*/
