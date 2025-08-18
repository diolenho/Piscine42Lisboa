/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 21:31:59 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/18 20:41:49 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultado;

	i = nb;
	resultado = 1;
	if (nb < 0)
		return (0);
	while (i > 1)
	{
		resultado = resultado * i;
		i = i -1;
	}
	return (resultado);
}
/*#include <stdio.h>
int	main()
{
	int	nb = -5;
	int 	fatorial;

	fatorial = ft_iterative_factorial(nb);
	printf("o fatorial de %d é %d\n", nb, fatorial);
}*/
