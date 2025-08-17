/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:23:34 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/11 20:37:30 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*d;

	d = dest;
	while (*d != '\0')
	{
		d++;
	}
	while (nb > 0 && *src != '\0')
	{
		*d = *src;
		d++;
		src++;
		nb--;
	}
	*d = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "Diogo ";
	char	src[] = "Pereira";

	printf("string 1: %s\n", dest);
	printf("string 2: %s\n", src);
	ft_strncat(dest, src, 3);
	printf("resultado com 3 caracteres: %s", dest);
}*/
