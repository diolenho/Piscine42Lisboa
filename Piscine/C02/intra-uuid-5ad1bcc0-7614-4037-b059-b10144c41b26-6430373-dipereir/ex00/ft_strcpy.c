/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:12:30 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/11 14:12:20 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*retorno_dest;

	retorno_dest = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (retorno_dest);
}

/*int	main()
{
	char src[] = "Dioguito";
	char dest[20];

	ft_strcpy(dest, src);
	printf("Fonte %s\n", src);
	printf("Destino %s", dest);
	return (0);
}*/	
