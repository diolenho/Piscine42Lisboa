/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:16:13 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/12 17:17:29 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*inicio;
	char	*caminho;
	char	*compara;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		inicio = str;
		caminho = str;
		compara = to_find;
		while (*caminho == *compara && *compara != '\0')
		{
			caminho++;
			compara++;
		}
		if (*compara == '\0')
		{
			return (inicio);
		}
		str++;
	}
	return (NULL);
}

/*int	main(void)
{
	char str[] = "Diogo Pereira";
	char to_find[] = "Diogo";
	char *result;

	printf("String: %s\n", str);
	printf("Busca: %s\n", to_find);
	result = ft_strstr(str, to_find);
	if (result != NULL)
	{
		printf("Substring encontrada: %s\n", to_find);
	} 
	else 
	{
		printf("Substring não encontrada.\n");
	}
	return (0);
}*/
