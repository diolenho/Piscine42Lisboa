/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:05:20 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/12 20:00:57 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	*str = "Dioguito";
	int 	resultado;

	resultado = ft_strlen(str);

	printf("String a ser analisada: %s\n", str);
	printf("Tamanho da string: %d\n", resultado);
}*/
