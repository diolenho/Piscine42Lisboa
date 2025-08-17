/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:47:32 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/04 18:58:27 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a = 7;
	int b = 3;
	int div;
	int mod;

	ft_div_mod( a, b, &div, &mod);

	printf("divisao = %d\n", div);
	printf("resto = %d", mod);
}*/
