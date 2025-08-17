/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:48:20 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/04 19:02:53 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	size;

	size = strlen(str);
	return (size);
}

/*int	main(void)
{
	int	size;

	size = ft_strlen("Diogo");
	printf("tamanho %d", size);
	return (0);
}*/
