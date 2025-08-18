/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:38:54 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/11 14:14:59 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[20];
	char	dest[20];

	src[0] = 'D';
	src[1] = 'i';
	src[2] = 'o';
	src[3] = 'g';
	src[4] = 'u';
	src[5] = 'i';
	src[6] = 't';
	src[7] = 'o';
	src[8] = '\0';
	ft_strncpy(dest, src, 20);
	printf("Fonte %s\n", src);
	printf("Destino %s", dest);
	return (0);
}*/
