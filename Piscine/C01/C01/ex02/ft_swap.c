/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:06:41 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/04 18:56:04 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *a;
	*a = *b;
	*b = troca;
}

/*int	main(void)
{
	int a = 3;
	int b = 5;
	
	printf("antes a = %d, b = %d\n", a, b);

	ft_swap(&a, &b);

	printf("depois a = %d, b = %d\n", a, b);
}*/
