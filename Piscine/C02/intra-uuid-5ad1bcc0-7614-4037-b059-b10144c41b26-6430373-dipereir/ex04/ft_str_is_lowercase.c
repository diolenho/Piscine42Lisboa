/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:12:04 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/11 14:44:06 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int	valor;
	char	str[3];

	str[0] = 'd';
	str[1] = 'i';
	valor = ft_str_is_lowercase(str);
	printf("String %s\n", str);
	printf("Resultado %d", valor);
	return (0);
}*/
